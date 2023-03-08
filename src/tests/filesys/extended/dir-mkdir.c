https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Tests mkdir(). */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) {
  CHECK(mkdir("a"), "mkdir \"a\"");
  CHECK(create("a/b", 512), "create \"a/b\"");
  CHECK(chdir("a"), "chdir \"a\"");
  CHECK(open("b") > 1, "open \"b\"");
}
