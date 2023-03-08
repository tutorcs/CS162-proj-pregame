https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Tests the halt system call. */

#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) {
  halt();
  fail("should have halted");
}
