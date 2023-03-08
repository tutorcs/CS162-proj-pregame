https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Tries to open a file with the null pointer as its name.
   The process must be terminated with exit code -1. */

#include <stddef.h>
#include <syscall.h>
#include "tests/main.h"

void test_main(void) { open(NULL); }
