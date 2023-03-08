https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Tests timer_sleep(-100).  Only requirement is that it not crash. */

#include <stdio.h>
#include "tests/threads/tests.h"
#include "threads/malloc.h"
#include "threads/synch.h"
#include "threads/thread.h"
#include "devices/timer.h"

void test_alarm_negative(void) {
  timer_sleep(-100);
  pass();
}
