https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Wait for a process that will be killed for bad behavior. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) { msg("wait(exec()) = %d", wait(exec("child-bad"))); }
