https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Tests argument passing to child processes. */

#include <syscall.h>
#include "tests/main.h"

void test_main(void) { wait(exec("child-args childarg")); }
