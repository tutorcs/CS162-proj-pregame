https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Ensure acquire on uninitializezd lock fails */

#include "tests/lib.h"
#include "tests/main.h"
#include <syscall.h>

void test_main(void) {
  lock_t lock;
  lock_acquire(&lock);
  fail("Uninitialized acquire succeeded");
}
