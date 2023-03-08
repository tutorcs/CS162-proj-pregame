https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <stdio.h>
#include <syscall.h>

int main(int argc, char** argv) {
  int i;

  for (i = 0; i < argc; i++)
    printf("%s ", argv[i]);
  printf("\n");

  return EXIT_SUCCESS;
}
