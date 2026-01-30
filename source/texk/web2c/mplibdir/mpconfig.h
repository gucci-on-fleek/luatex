#ifndef METAPOST_MPCONFIG_H
#define METAPOST_MPCONFIG_H

/* We define our own INTEGER_TYPE,  */
/* see source/texk/web2c/w2c/config.h */
#if defined(WIN32)
#define INTEGER_TYPE __int64 
#else
#define INTEGER_TYPE int64_t
# endif  
# define INTEGER_MAX INT64_MAX
# define INTEGER_MIN INT64_MIN

/* In C23 true and false are keywords */
/* and  the value of the macro  __STDC_VERSION__ is 202311L */
#undef true
#undef false
#if !defined(__STDC_VERSION__) || (__STDC_VERSION__ <202311L) /* before C23 */
# define true 1
# define false 0
#endif




#endif /* not METAPOST_MPCONFIG_H */
