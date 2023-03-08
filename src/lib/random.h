https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef __LIB_RANDOM_H
#define __LIB_RANDOM_H

#include <stddef.h>

void random_init(unsigned seed);
void random_bytes(void*, size_t);
unsigned long random_ulong(void);

#endif /* lib/random.h */
