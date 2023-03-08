https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* halt.c

   Simple program to test whether running a user program works.

   Just invokes a system call that shuts down the OS. */

#include <syscall.h>

int main(void) {
  halt();
  /* not reached */
}
