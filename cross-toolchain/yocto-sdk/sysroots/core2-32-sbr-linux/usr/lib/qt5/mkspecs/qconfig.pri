#configuration
CONFIG +=  cross_compile shared qpa no_mocdepend release qt_no_framework
host_build {
    QT_ARCH = i386
    QT_TARGET_ARCH = i386
} else {
    QT_ARCH = i386
    QMAKE_DEFAULT_LIBDIRS = $$[QT_SYSROOT]/usr/lib/i686-sbr-linux/5.3.0 $$[QT_SYSROOT]/usr/lib $$[QT_SYSROOT]/lib $$[QT_HOST_PREFIX]/lib/i686-sbr-linux/gcc/i686-sbr-linux/5.3.0
    QMAKE_DEFAULT_INCDIRS = $$[QT_SYSROOT]/usr/include/c++/5.3.0 $$[QT_SYSROOT]/usr/include/c++/5.3.0/i686-sbr-linux $$[QT_SYSROOT]/usr/include/c++/5.3.0/backward $$[QT_HOST_PREFIX]/lib/i686-sbr-linux/gcc/i686-sbr-linux/5.3.0/include $$[QT_SYSROOT]/usr/lib/gcc/i686-sbr-linux/5.3.0/include $$[QT_HOST_PREFIX]/lib/i686-sbr-linux/gcc/i686-sbr-linux/5.3.0/include-fixed $$[QT_SYSROOT]/usr/include
}
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config libudev evdev c++11 c++14 c++1z shared qpa reduce_exports clock-gettime clock-monotonic posix_fallocate mremap getaddrinfo ipv6ifname getifaddrs inotify eventfd threadsafe-cloexec system-jpeg system-png png freetype no-harfbuzz system-zlib dbus dbus-linked openssl pulseaudio concurrent audio-backend release

#versioning
QT_VERSION = 5.6.2
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 6
QT_PATCH_VERSION = 2

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 

QT_EDITION = OpenSource

# pkgconfig
PKG_CONFIG_SYSROOT_DIR = $$[QT_SYSROOT]
PKG_CONFIG_LIBDIR = $$[QT_SYSROOT]/usr/lib/pkgconfig

QT_COMPILER_STDCXX = 199711
QT_GCC_MAJOR_VERSION = 5
QT_GCC_MINOR_VERSION = 3
QT_GCC_PATCH_VERSION = 0
