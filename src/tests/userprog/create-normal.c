https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* Creates an ordinary empty file. */

#include "tests/lib.h"
#include "tests/main.h"

void test_main(void) { CHECK(create("quux.dat", 0), "create quux.dat"); }
