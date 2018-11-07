GENCCODE_ASSEMBLY_TYPE=-a gcc
SO=so
SOBJ=so
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=.56.1
COMPILE=i686-sbr-linux-gcc  -m32 -march=core2 -mtune=core2 -msse3 -mfpmath=sse --sysroot=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom -D_REENTRANT  -DU_HAVE_ELF_H=1 -DU_HAVE_ATOMIC=1  -DU_ATTRIBUTE_DEPRECATED= -O2 -pipe -g -feliminate-unused-debug-types -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/icu/56.1-r0=/usr/src/debug/icu/56.1-r0 -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/x86_64-linux= -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom=  -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -c
LIBFLAGS=-I/usr/include -DPIC -fPIC
GENLIB=i686-sbr-linux-gcc  -m32 -march=core2 -mtune=core2 -msse3 -mfpmath=sse --sysroot=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom -O2 -pipe -g -feliminate-unused-debug-types -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/work/core2-32-sbr-linux/icu/56.1-r0=/usr/src/debug/icu/56.1-r0 -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/x86_64-linux= -fdebug-prefix-map=/home/opennao/jenkins/workspace/yocto-rootfs/build/tmp/sysroots/ald-atom=  -std=c99 -Wall -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings   -Wl,-O1 -Wl,--hash-style=gnu   -shared -Wl,-Bsymbolic
LDICUDTFLAGS=
LD_SONAME=-Wl,-soname -Wl,
RPATH_FLAGS=
BIR_LDFLAGS=-Wl,-Bsymbolic
AR=i686-sbr-linux-ar
ARFLAGS=r
RANLIB=i686-sbr-linux-ranlib
INSTALL_CMD=/usr/bin/install -c
