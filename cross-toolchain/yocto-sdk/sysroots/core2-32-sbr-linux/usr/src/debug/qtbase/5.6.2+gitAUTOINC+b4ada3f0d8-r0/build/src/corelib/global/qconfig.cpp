/* License Info */
static const char qt_configure_licensee_str          [256 + 12] = "qt_lcnsuser=Open Source";
static const char qt_configure_licensed_products_str [256 + 12] = "qt_lcnsprod=OpenSource";

/* Installation date */
static const char qt_configure_installation          [12+11]    = "qt_instdate=2012-12-20";

/* Installation Info */
static const char qt_configure_prefix_path_str       [512 + 12] = "qt_prfxpath=/usr";
#ifdef QT_BUILD_QMAKE
static const char qt_configure_ext_prefix_path_str   [512 + 12] = "qt_epfxpath=/usr";
static const char qt_configure_host_prefix_path_str  [512 + 12] = "qt_hpfxpath=/usr";
#endif

static const short qt_configure_str_offsets[] = {
     0, 14, 26, 30, 46, 54, 70, 86, 98, 106, 116, 139, 158,
#ifdef QT_BUILD_QMAKE
     174, 175, 188, 192, 200, 210,
#endif
};
static const char qt_configure_strs[] =
    "share/doc/qt5\0"
    "include/qt5\0"
    "lib\0"
    "lib/qt5/libexec\0"
    "bin/qt5\0"
    "lib/qt5/plugins\0"
    "lib/qt5/imports\0"
    "lib/qt5/qml\0"
    "lib/qt5\0"
    "share/qt5\0"
    "share/qt5/translations\0"
    "share/qt5/examples\0"
    "share/qt5/tests\0"
#ifdef QT_BUILD_QMAKE
    "\0"
    "/usr/bin/qt5\0"
    "lib\0"
    "lib/qt5\0"
    "linux-g++\0"
    "linux-g++\0"
#endif
;

#define QT_CONFIGURE_SETTINGS_PATH "/etc/qt5"

#ifdef QT_BUILD_QMAKE
# define QT_CONFIGURE_SYSROOTIFY_PREFIX true
#endif

/* strlen( "qt_lcnsxxxx" ) == 12 */
#define QT_CONFIGURE_LICENSEE qt_configure_licensee_str + 12
#define QT_CONFIGURE_LICENSED_PRODUCTS qt_configure_licensed_products_str + 12

#define QT_CONFIGURE_PREFIX_PATH qt_configure_prefix_path_str + 12
#ifdef QT_BUILD_QMAKE
# define QT_CONFIGURE_EXT_PREFIX_PATH qt_configure_ext_prefix_path_str + 12
# define QT_CONFIGURE_HOST_PREFIX_PATH qt_configure_host_prefix_path_str + 12
#endif
