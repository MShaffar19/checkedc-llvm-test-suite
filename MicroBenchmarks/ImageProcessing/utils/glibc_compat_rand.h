/*===------------- glibc_compat_rand.h- glibc rand emulation --------------===*\
|*
|*                     The LLVM Compiler Infrastructure
|*
|* This file is distributed under the University of Illinois Open Source
|* License. See LICENSE.TXT for details.
|*
\*===----------------------------------------------------------------------===*/

#ifndef GLIBC_COMPAT_RAND_H
#define GLIBC_COMPAT_RAND_H
#ifdef __cplusplus
extern "C" {
#endif
int glibc_compat_rand(void);
void glibc_compat_srand(unsigned int seed);
#ifdef __cplusplus
}
#endif
#endif /* GLIBC_COMPAT_RAND_H */
