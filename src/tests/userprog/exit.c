https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Tests the exit system call. */

#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) {
  exit(57);
  fail("should have called exit(57)");
}
