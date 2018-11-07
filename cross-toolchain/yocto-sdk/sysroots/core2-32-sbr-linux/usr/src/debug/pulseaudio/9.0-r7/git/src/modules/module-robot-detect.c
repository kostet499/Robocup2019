/***
  Author(s):
   - Julien Massot <jmassot@aldebaran-robotics.com>

  Copyright 2013 Aldebaran Robotics

  PulseAudio is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3 of the License, or
  (at your option) any later version.

  PulseAudio is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
***/

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include <string.h>

#include <libxml/parser.h>

#include <pulse/xmalloc.h>

#include "module-robot-detect-symdef.h"
#include <pulsecore/macro.h>
#include <pulsecore/source.h>
#include <pulsecore/core-util.h>
#include <pulsecore/namereg.h>

PA_MODULE_AUTHOR("Julien Massot");
PA_MODULE_DESCRIPTION("Detect robot hardware version and load the matching profile");
PA_MODULE_VERSION(PACKAGE_VERSION);
PA_MODULE_LOAD_ONCE(true);
PA_MODULE_USAGE("");

#define DEVICE_HEAD_INTERNAL_XML "/media/internal/DeviceHeadInternalGeode.xml"
#define MODULE_PREFERENCE        "ModulePreference"
#define PREFERENCE               "Preference"
#define MEMORY_NAME              "memoryName"
#define ROBOT_TYPE_KEY           "RobotConfig/Head/Type"
#define MICROPHONE_KEY           "RobotConfig/Head/Device/Micro/Version"
#define MICROPHONE_VALUE         "value"

/* Product id for Google Inc on usb bus */
#define GOOGLE_VENDOR_ID "18d1"

/* Android Open Accessory Protocol Version 2
 * https://source.android.com/devices/accessories/aoa2.html
 */
#define AOAv2_AUDIO_PRODUCT_ID               "2d02"
#define AOAv2_AUDIO_ADB_PRODUCT_ID           "2d03"
#define AOAv2_AUDIO_ACCESSORY_PRODUCT_ID     "2d04"
#define AOAv2_AUDIO_ADB_ACCESSORY_PRODUCT_ID "2d05"

struct userdata {
  pa_hook_slot *source_put_slot;
  pa_hook_slot *source_unlink_slot;
  uint32_t tablet_source_index;
  uint32_t loopback_module_index;
};

/**
 * @brief List of Aldebaran Robot Type
 */
enum robotType
{
    ROBOT_TYPE_NAO    = 0, //!< Nao robot
    ROBOT_TYPE_PEPPER = 1, //!< Pepper robot
    ROBOT_TYPE_ROMEO  = 2  //!< Romeo robot
};

/**
 * @brief Get the Robot type from the main node of the XML file.
 * @param[in] input_node Xml Node to parse.
 * @return Robot type extracted information.
 */
static enum robotType get_robot_type(xmlNode* input_node)
{
    xmlNode *first_child, *node;
    enum robotType tmpRobotType = ROBOT_TYPE_NAO;
    if (input_node == NULL)
    {
        pa_log_error("get_robot_type: Can not parse NULL XML node\n");
        return tmpRobotType;
    }
    /* Parse all the node to find the Preference node */
    first_child = input_node;
    for (node = first_child; node; node = node->next)
    {
        xmlChar *keystr;
        if (xmlStrcmp(node->name, (const xmlChar *) PREFERENCE) != 0)
            continue;
        keystr = xmlGetProp(node, (const xmlChar *) MEMORY_NAME);
        if (keystr == NULL)
            continue;
        if (xmlStrcmp(keystr, (const xmlChar *) ROBOT_TYPE_KEY) == 0)
        {
            xmlChar *valuestr = xmlGetProp(node, (const xmlChar *) MICROPHONE_VALUE);
            if (valuestr != NULL)
            {
                if (xmlStrcmp(valuestr, (const xmlChar *) "Nao") == 0)
                    tmpRobotType = ROBOT_TYPE_NAO;
                else if (    xmlStrcmp(valuestr, (const xmlChar *) "Juliette") == 0
                          || xmlStrcmp(valuestr, (const xmlChar *) "Pepper") == 0)
                    tmpRobotType = ROBOT_TYPE_PEPPER;
                else if (xmlStrcmp(valuestr, (const xmlChar *) "Romeo") == 0)
                    tmpRobotType = ROBOT_TYPE_ROMEO;
                else
                {
                    pa_log_error("Unknow key for robot type: %s {Nao/Pepper/Romeo}\n", valuestr);
                    tmpRobotType = ROBOT_TYPE_NAO;
                }
                xmlFree(keystr);
                xmlFree(valuestr);
                break;
            }
        }
        xmlFree(keystr);
    }
    return tmpRobotType;
}

/**
 * @brief List of Microphone type availlavle
 */
enum MicrophoneVersion
{
    NON_TANGENTIAL_TRAPEZE = 0, //!< non-tangential microphone place un a trapeze form.
    NON_TANGENTIAL_SQUARE  = 1, //!< non-tangential microphone place un a square form.
    TANGENTIAL_TRAPEZE     = 2, //!< tangential microphone place un a trapeze form.
    TANGENTIAL_SQUARE      = 3, //!< tangential microphone place un a square form.
};

/**
 * @brief Get the Microphone version type from the main node of the XML file.
 * @param[in] input_node Xml Node to parse.
 * @param[in] type Robot type to select the good interpreted value.
 * @return Microphone type extracted information.
 */
static enum MicrophoneVersion get_microphones_version(xmlNode* input_node, enum robotType type)
{
    xmlNode *first_child, *node;
    enum MicrophoneVersion version = NON_TANGENTIAL_TRAPEZE;
    if (type == ROBOT_TYPE_PEPPER)
    {
        // Force pepper default mode
        version = TANGENTIAL_SQUARE;
    }
    if (input_node == NULL)
    {
        pa_log_error("get_microphones_version: Can not parse NULL XML node\n");
        return version;
    }
    first_child = input_node;
    for (node = first_child; node; node = node->next)
    {
        xmlChar *keystr;
        if (xmlStrcmp(node->name, (const xmlChar *) PREFERENCE) != 0)
            continue;
        keystr = xmlGetProp(node, (const xmlChar *) MEMORY_NAME);
        if (keystr == NULL)
            continue;
        if (xmlStrcmp(keystr, (const xmlChar *) MICROPHONE_KEY) == 0)
        {
            xmlChar *valuestr = xmlGetProp(node, (const xmlChar *) MICROPHONE_VALUE);
            if (valuestr != NULL)
            {
                if (type == ROBOT_TYPE_NAO)
                {
                    if (xmlStrcmp(valuestr, (const xmlChar *) "0") == 0)
                        version = NON_TANGENTIAL_TRAPEZE;
                    else if (xmlStrcmp(valuestr, (const xmlChar *) "1") == 0)
                        version = TANGENTIAL_SQUARE;
                    else if (xmlStrcmp(valuestr, (const xmlChar *) "2") == 0)
                        version = TANGENTIAL_TRAPEZE;
                    else if (xmlStrcmp(valuestr, (const xmlChar *) "4") == 0)
                        version = NON_TANGENTIAL_TRAPEZE;
                    else
                    {
                        pa_log_error("Unknow key with robot type: 'Nao' for microphone: %s {0/1/2/4}\n", valuestr);
                    }
                }
                else if (type == ROBOT_TYPE_PEPPER)
                {
                    if (xmlStrcmp(valuestr, (const xmlChar *) "0") == 0)
                        version = TANGENTIAL_SQUARE;
                    else if (xmlStrcmp(valuestr, (const xmlChar *) "1") == 0)
                        version = TANGENTIAL_SQUARE;
                    else if (xmlStrcmp(valuestr, (const xmlChar *) "2") == 0)
                        pa_log_error("Unknow key with robot type: 'Pepper' for microphone: %s {0/1/3} fallback on 1\n", valuestr);
                    else if (xmlStrcmp(valuestr, (const xmlChar *) "3") == 0)
                        version = NON_TANGENTIAL_SQUARE;
                    else
                    {
                        pa_log_error("Unknow key with robot type: 'Pepper' for microphone: %s {0/1/3}\n", valuestr);
                    }
                }
                else if (type == ROBOT_TYPE_ROMEO)
                    pa_log_error("Unknow key with robot type: 'Romeo' for microphone: %s {---}\n", valuestr);
                xmlFree(keystr);
                xmlFree(valuestr);
                break;
            }
        }
        xmlFree(keystr);
    }
    return version;
}

/**
 * @brief Structure containing the XML property.
 */
struct propertyXML
{
	enum robotType robotType; //!< Robot Type.
	enum MicrophoneVersion micVersion; //!< microphone version.
};

/**
 * @brief Parse the Input file of robot key files
 * @return The extract usefull data of this XML
 */
static struct propertyXML get_xml_property()
{
    xmlDoc  *document;
    xmlNode *root;
    struct propertyXML property;
    /* Set default value */
    property.robotType = ROBOT_TYPE_NAO;
    property.micVersion = NON_TANGENTIAL_TRAPEZE;
    document = xmlReadFile(DEVICE_HEAD_INTERNAL_XML, NULL, 0);
    if (document == NULL)
    {
        pa_log_error("Failed to parse %s, falling back to non tangential channel map.", DEVICE_HEAD_INTERNAL_XML);
        return property;
    }
    root = xmlDocGetRootElement(document);
    if (root == NULL)
    {
        pa_log_error("empty document: %s\n", DEVICE_HEAD_INTERNAL_XML);
        goto fail;
    }
    if (xmlStrcmp(root->name, (const xmlChar *) MODULE_PREFERENCE) != 0)
    {
        pa_log_error("Invalid first node should be ModulePreference, current: %s\n", root->name);
        goto fail;
    }
    property.robotType = get_robot_type(root->children);
    property.micVersion = get_microphones_version(root->children, property.robotType);
fail:
    if (document != NULL)
        xmlFree(document);
    return property;
}

/**
 * @brief get the correct configuration file of the microphone organisation
 * @param[in] version Type of microphone
 * @return The constant string name of the configuration to open
 */
static const char *get_profile(enum MicrophoneVersion version)
{
    switch (version) {
        case NON_TANGENTIAL_SQUARE:
        case TANGENTIAL_SQUARE:
            return "square.conf";
        case NON_TANGENTIAL_TRAPEZE:
        case TANGENTIAL_TRAPEZE:
            return "trapeze.conf";
    }
    return "trapeze.conf";
}

/**
 * @brief List of codec Type in the Back-end
 */
enum codecType
{
    CODEC_TYPE_UNKNOW = 0, //!< Unknow codec type
    CODEC_TYPE_AD198X = 1, //!< 'Conexant' Audio codec (support 16,20 and 24 bits PCM transfert)
    CODEC_TYPE_WM8860 = 2,  //!< 'Wolfson' Audio Codec (support 16 bits PCM and 32 bits float transfert)
    CODEC_TYPE_QEMU_INTEL_HDA = 3  //!< 'HDA Intel' QEmu emulated
};

/**
 * @brief Get the current codec type in the "block-elec".
 * @param[out] idCard Id of the interface.
 * @return Type of the codec in the back-end.
 */
static enum codecType get_codec_type(uint32_t* idCard)
{
    char buffer[1024];
    FILE* file;
    *idCard = 0;
    file = fopen("/proc/asound/pcm", "r");
    if (file == NULL)
    {
        pa_log_error("Can not read Codec type in file /proc/asound/pcm");
        return CODEC_TYPE_UNKNOW;
    }
    pa_log_info("parse file: '/proc/asound/pcm'");
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        pa_log_info("parse line: '%s'", buffer);
        /*
         * For Nao or pepper <= 1.7 we will have:
         *     - "**-00: AD198x Analog : AD198x Analog : playback 1 : capture 2"
         * For pepper >= 1.8 we will have:
         *     - ""
         */
        if (strncmp("-00: AD198x Analog", buffer+2, 18) == 0)
        {
            fclose(file);
            *(buffer+3) = '\0';
            *idCard = atoi(buffer);
            pa_log_info("Find AD198X codec in /proc/asound/pcm with ID=%d", *idCard);
            return CODEC_TYPE_AD198X;
        }
        if (strncmp("-00: wm8860", buffer+2, 11) == 0)
        {
            fclose(file);
            *(buffer+3) = '\0';
            *idCard = atoi(buffer);
            pa_log_info("Find WM8860 codec in /proc/asound/pcm with ID=%d", *idCard);
            return CODEC_TYPE_WM8860;
        }
        else if (strncmp("-00: ID 22 Analog", buffer+2, 17) == 0)
        {
            fclose(file);
            *(buffer+3) = '\0';
            *idCard = atoi(buffer);
            pa_log_info("Found Qemu codec in /proc/asound/pcm with ID=%d", *idCard);
            return CODEC_TYPE_QEMU_INTEL_HDA;
        }
    }
    /* No need anymore the file */
    fclose(file);
    pa_log_error("Can not detect type of the codec...");
    return CODEC_TYPE_UNKNOW;
}

/**
 * @brief Get the current codec type in the "block-elec".
 * @param[out] idCard Id of the interface.
 * @return Type of the codec in the back-end.
 */
static const char* get_card_base_name(void)
{
    char buffer[1024];
    FILE* file;
    file = fopen("/proc/asound/cards", "r");
    if (file == NULL)
    {
        pa_log_error("Can not read Card type in file /proc/asound/cards");
        return "0";
    }
    pa_log_info("parse file: '/proc/asound/cards'");
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        pa_log_info("parse line: '%s'", buffer);
        if (strncmp("[PCH            ]", buffer+3, 17) == 0)
        {
            fclose(file);
            pa_log_info("Find PCH card");
            return "PCH";
        }
        if (strncmp("[MID            ]", buffer+3, 17) == 0)
        {
            fclose(file);
            pa_log_info("Find MID card");
            return "MID";
        }
        if  (strncmp("[Intel          ]", buffer+3, 17) == 0)
        {
            fclose(file);
            pa_log_info("Find QEmu card");
            return "QEmu";
        }
    }
    /* No need anymore the file */
    fclose(file);
    pa_log_error("Can not detect type of the codec...");
    return "0";
}

/**
 * @brief Select the sample format of the HDA transfert with the codec type.
 * @param[in] codec Type of the codec in the back-end.
 * @return A string of the format requested by the codec.
 */
static const char* get_codec_format(enum codecType codec)
{
    switch (codec)
    {
        case CODEC_TYPE_AD198X:
            return "s24le";
        case CODEC_TYPE_WM8860:
            return "float32le";
        case CODEC_TYPE_QEMU_INTEL_HDA:
            return "s16le";
        case CODEC_TYPE_UNKNOW:
        default:
            // nothing to do ..
            break;
    }
    // By default we simply use the generic codec configuration
    return "s16le";
}

/* When a AOAv2 audio usb source is created, loopback it to default sink.
 * The code is mostly taken from module-bluetooth-policy.
 */
static pa_hook_result_t source_put_hook_callback(pa_core *c, pa_source *source, void *userdata) {
    const char *s;
    char *args;
    pa_module *module;
    struct userdata *u = userdata;

    pa_assert(c);
    pa_assert(source);
    pa_assert(userdata);

    /* Only consider Tablet sources */
    s = pa_proplist_gets(source->proplist, PA_PROP_DEVICE_BUS);
    if (!s)
        return PA_HOOK_OK;

    if (!pa_streq(s, "usb"))
        return PA_HOOK_OK;

    s = pa_proplist_gets(source->proplist, "device.vendor.id");
    if (!s)
        return PA_HOOK_OK;

    if (!pa_streq(s, GOOGLE_VENDOR_ID))
        return PA_HOOK_OK;

    s = pa_proplist_gets(source->proplist, "device.product.id");
    if (!s)
        return PA_HOOK_OK;
    if (!pa_streq(s, AOAv2_AUDIO_PRODUCT_ID)
        && !pa_streq(s, AOAv2_AUDIO_ADB_PRODUCT_ID)
        && !pa_streq(s, AOAv2_AUDIO_ACCESSORY_PRODUCT_ID)
        && !pa_streq(s, AOAv2_AUDIO_ADB_ACCESSORY_PRODUCT_ID))
        return PA_HOOK_OK;

    if (u->tablet_source_index != PA_INVALID_INDEX) {
        pa_log_warn("An AOAv2 source appears but one %u is already bound to default sink",
                    u->tablet_source_index);
        return PA_HOOK_OK;
    }

    u->tablet_source_index = source->index;

    /* Load module-loopback */
    args = pa_sprintf_malloc("source=\"%s\"", source->name);
    module = pa_module_load(c, "module-loopback", args);
    if (module) {
        u->tablet_source_index = source->index;
        u->loopback_module_index = module->index;
    }

    pa_xfree(args);

    return PA_HOOK_OK;
}

static pa_hook_result_t source_unlink_hook_callback(pa_core *c, pa_source *source, void *userdata)
{
    struct userdata *u = userdata;

    pa_assert(c);
    pa_assert(source);
    pa_assert(u);

    if (u->tablet_source_index == PA_INVALID_INDEX
        || u->loopback_module_index == PA_INVALID_INDEX)
        return PA_HOOK_OK;

    if (u->tablet_source_index != source->index)
        return PA_HOOK_OK;

    pa_module_unload_request_by_index(c, u->loopback_module_index, true);

    u->loopback_module_index = PA_INVALID_INDEX;
    u->tablet_source_index = PA_INVALID_INDEX;

    return PA_HOOK_OK;
}

static int robot_set_source_volume(pa_core *c, const char *n, uint32_t volume)
{
  pa_source *source;
  pa_cvolume cvolume;

  if (!(source = pa_namereg_get(c, n, PA_NAMEREG_SOURCE))) {
    pa_log_error("No source found by this name or index.\n");
    return -1;
  }
  pa_cvolume_init(&cvolume);
  pa_cvolume_set(&cvolume, 4, volume);
  pa_source_set_volume(source, &cvolume, true, true);
  return 0;
}

/**
 * @brief Pulse-audio initialization interface.
 * @param[in] mmm Current Pulseaudio module
 * @return An error code: 0 if no error.
 */
int pa__init(pa_module* m) {
    struct propertyXML property;
    enum codecType codec;
    char *args;
    uint32_t idCard = 0;
    struct userdata *u;
    const char* cardDeviceId = "0";
    property = get_xml_property();
    pa_log_info("Using microphone version %d", property.micVersion);
    codec = get_codec_type(&idCard);
    pa_log_info("Using codec type %d", codec);
    cardDeviceId = get_card_base_name();
    pa_log_info("Using card name '%s'", cardDeviceId);
    /* create argument for Alsa interface */
    if (codec != CODEC_TYPE_QEMU_INTEL_HDA) {
      args = pa_sprintf_malloc("device_id=\"%s\" "
                               "profile_set=\"aldebaran-robotics/%s_%s\" "
                               "fixed_latency_range=no "
                               "ignore_dB=no "
                               "deferred_volume=yes "
                               "format=%s "
                               "rate=48000 "
                               "sink_name=speaker "
                               "source_name=microphone ",
                               cardDeviceId,
                               cardDeviceId,
                               get_profile(property.micVersion),
                               get_codec_format(codec));

      /* Load Alsa module */
      pa_module_load(m->core, "module-alsa-card", args);

      /* set input volume at 235% by default : 235%=153900 */
      if (robot_set_source_volume(m->core, "microphone", 153900) !=0)
        return -1;
    } else {
      pa_log_info("Running on Qemu hda codec");
      args = pa_sprintf_malloc("device_id=0");
      pa_module_load(m->core, "module-alsa-card", args);
    }

    /* Connect to source_put_hook so if a AOAv2 source appears,
     * we will connect a loopback to the default sink.
     */
    m->userdata = u = pa_xnew0(struct userdata, 1);
    u->tablet_source_index = PA_INVALID_INDEX;
    u->loopback_module_index = PA_INVALID_INDEX;
    u->source_put_slot = pa_hook_connect(&m->core->hooks[PA_CORE_HOOK_SOURCE_PUT], PA_HOOK_NORMAL,
                                         (pa_hook_cb_t) source_put_hook_callback, u);
    u->source_unlink_slot =
      pa_hook_connect(&m->core->hooks[PA_CORE_HOOK_SOURCE_UNLINK],
                      PA_HOOK_NORMAL, (pa_hook_cb_t) source_unlink_hook_callback, u);

    pa_xfree(args);

    /* No error */
    return 0;
}

void pa__done(pa_module *m) {
    struct userdata *u;

    pa_assert(m);

    if (!(u = m->userdata))
        return;

    if (u->source_put_slot)
        pa_hook_slot_free(u->source_put_slot);

    if (u->source_unlink_slot)
        pa_hook_slot_free(u->source_unlink_slot);

    pa_xfree(u);
}
