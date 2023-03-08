https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Tries to execute a nonexistent process.
   The exec system call must return -1. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) { msg("exec(\"no-such-file\"): %d", exec("no-such-file")); }
