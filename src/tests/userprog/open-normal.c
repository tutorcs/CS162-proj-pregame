https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Open a file. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) {
  int handle = open("sample.txt");
  if (handle < 2)
    fail("open() returned %d", handle);
}
