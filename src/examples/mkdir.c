https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
/* mkdir.c

   Creates a directory. */

#include <stdio.h>
#include <syscall.h>

int main(int argc, char* argv[]) {
  if (argc != 2) {
    printf("usage: %s DIRECTORY\n", argv[0]);
    return EXIT_FAILURE;
  }

  if (!mkdir(argv[1])) {
    printf("%s: mkdir failed\n", argv[1]);
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}
