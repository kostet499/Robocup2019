get_filename_component(_pulseaudio_root "${YOCTO_SDK_TARGET_SYSROOT}" ABSOLUTE)

set(
  PULSEAUDIO_LIBRARIES
  ${_pulseaudio_root}/usr/lib/libpulse-simple.so.0
  ${_pulseaudio_root}/usr/lib/libpulse.so.0
  CACHE INTERNAL "" FORCE
)

set(
  PULSEAUDIO_INCLUDE_DIRS
  ${_pulseaudio_root}/usr/include
  CACHE INTERNAL "" FORCE
)

qi_persistent_set(PULSEAUDIO_DEPENDS SYSTEMD JSON-C TCP-WRAPPERS SNDFILE LIBASYNCNS DBUS-1 GDBM PTHREAD RT DL)

if(WITH_PULSEAUDIO_EXTRA_LIBS)
  message(WARNING "
    This project enables pulseaudio extra libraries:
    - libpulse-mainloop-glib
    - libpulsecore
    - libpulsecommon
    - libpulsedsp

    This requieres to tune the RPATH of the targets to also look into:
      <libdir>/pulseaudio/

  ")

  list(INSERT PULSEAUDIO_LIBRARIES 0
    ${_pulseaudio_root}/usr/lib/libpulse-mainloop-glib.so.0
    ${_pulseaudio_root}/usr/lib/libpulsecore-5.0.so
  )
  list(APPEND PULSEAUDIO_LIBRARIES
    ${_pulseaudio_root}/usr/lib/pulseaudio/libpulsecommon-5.0.so
    ${_pulseaudio_root}/usr/lib/pulseaudio/libpulsedsp.so
  )

  list(APPEND PULSEAUDIO_DEPENDS GLIB2 LIBTOOL SPEEX SAMPLERATE)
endif()


export_lib(PULSEAUDIO)
