https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Try to remove the root directory.
   This must fail. */

#include <syscall.h>
#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) {
  CHECK(!remove("/"), "remove \"/\" (must fail)");
  CHECK(create("/a", 243), "create \"/a\"");
}
