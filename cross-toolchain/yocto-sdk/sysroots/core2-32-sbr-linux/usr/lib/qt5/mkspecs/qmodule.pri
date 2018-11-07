CONFIG +=  cross_compile compile_examples silent qpa largefile use_gold_linker sse2 sse3 ssse3 sse4_1 sse4_2 avx avx2 pcre
QT_BUILD_PARTS +=  libs tools
QT_NO_DEFINES =  ACCESSIBILITY ALSA CUPS EGL EGLFS EGL_X11 FONTCONFIG GLIB HARFBUZZ ICONV IMAGEFORMAT_JPEG LIBPROXY MITSHM OPENGL OPENVG SESSIONMANAGER SHAPE STYLE_GTK TABLET TSLIB XCURSOR XFIXES XINERAMA XINPUT XKB XRANDR XRENDER XSYNC XVIDEO ZLIB
QT_QCONFIG_PATH = 
host_build {
    QT_CPU_FEATURES.i386 =  mmx sse sse2 sse3 ssse3
} else {
    QT_CPU_FEATURES.i386 =  mmx sse sse2 sse3 ssse3
}
QT_COORD_TYPE = double
QT_LFLAGS_ODBC   = -lodbc
OE_QMAKE_AR = i686-sbr-linux-ar
OE_QMAKE_CC = i686-sbr-linux-gcc  -m32 -march=core2 -mtune=core2 -msse3 -mfpmath=sse --sysroot=$$[QT_SYSROOT]
OE_QMAKE_CFLAGS =  -O2 -pipe -g -feliminate-unused-debug-types -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/qtbase/5.6.2+gitAUTOINC+b4ada3f0d8-r0=/usr/src/debug/qtbase/5.6.2+gitAUTOINC+b4ada3f0d8-r0 -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/x86_64-linux= -fdebug-prefix-map=$$[QT_SYSROOT]= 
OE_QMAKE_COMPILER = i686-sbr-linux-gcc  -m32 -march=core2 -mtune=core2 -msse3 -mfpmath=sse --sysroot=$$[QT_SYSROOT]
OE_QMAKE_CXX = i686-sbr-linux-g++  -m32 -march=core2 -mtune=core2 -msse3 -mfpmath=sse --sysroot=$$[QT_SYSROOT]
OE_QMAKE_CXXFLAGS =  -O2 -pipe -g -feliminate-unused-debug-types -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/qtbase/5.6.2+gitAUTOINC+b4ada3f0d8-r0=/usr/src/debug/qtbase/5.6.2+gitAUTOINC+b4ada3f0d8-r0 -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/x86_64-linux= -fdebug-prefix-map=$$[QT_SYSROOT]=  -fvisibility-inlines-hidden
OE_QMAKE_LDFLAGS = -Wl,-O1 -Wl,--hash-style=gnu -Wl,--as-needed
OE_QMAKE_LINK = i686-sbr-linux-g++  -m32 -march=core2 -mtune=core2 -msse3 -mfpmath=sse --sysroot=$$[QT_SYSROOT]
OE_QMAKE_STRIP = echo
styles += mac fusion windows
DEFINES += QT_NO_MTDEV
QT_LIBS_DBUS = -ldbus-1
QT_CFLAGS_DBUS = -I$$[QT_SYSROOT]/usr/include/dbus-1.0 -I$$[QT_SYSROOT]/usr/lib/dbus-1.0/include
QT_HOST_CFLAGS_DBUS = -I$$[QT_HOST_PREFIX]/include/dbus-1.0 -I$$[QT_HOST_PREFIX]/lib/dbus-1.0/include
QT_CFLAGS_PULSEAUDIO = -D_REENTRANT -I$$[QT_SYSROOT]/usr/include/glib-2.0 -I$$[QT_SYSROOT]/usr/lib/glib-2.0/include
QT_LIBS_PULSEAUDIO = -lpulse-mainloop-glib -lpulse -lglib-2.0
QMAKE_INCDIR_LIBUDEV = 
QMAKE_LIBS_LIBUDEV = -ludev
DEFINES += QT_NO_TSLIB
DEFINES += QT_NO_LIBINPUT
sql-drivers = 
sql-plugins = 
