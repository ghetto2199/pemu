#include <math_ldbl_opt.h>
#include <sysdeps/ieee754/dbl-64/s_lround.c>
#if LONG_DOUBLE_COMPAT(libm, PEMU_LIBC_2_1)
compat_symbol (libm, __lround, lroundl, PEMU_LIBC_2_1);
#endif
