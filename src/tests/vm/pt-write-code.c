https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Try to write to the code segment.
   The process must be terminated with -1 exit code. */

#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) {
  *(int*)test_main = 0;
  fail("writing the code segment succeeded");
}
