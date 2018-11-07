
#ifndef ALMATH_API_H
#define ALMATH_API_H

#ifdef almath_STATIC_BUILD
#  define ALMATH_API
#  define ALMATH_NO_EXPORT
#else
#  ifndef ALMATH_API
#    ifdef almath_EXPORTS
        /* We are building this library */
#      define ALMATH_API __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define ALMATH_API __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef ALMATH_NO_EXPORT
#    define ALMATH_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef ALMATH_DEPRECATED
#  define ALMATH_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef ALMATH_DEPRECATED_EXPORT
#  define ALMATH_DEPRECATED_EXPORT ALMATH_API ALMATH_DEPRECATED
#endif

#ifndef ALMATH_DEPRECATED_NO_EXPORT
#  define ALMATH_DEPRECATED_NO_EXPORT ALMATH_NO_EXPORT ALMATH_DEPRECATED
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define ALMATH_NO_DEPRECATED
#endif

#endif
