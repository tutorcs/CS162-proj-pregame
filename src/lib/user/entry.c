https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include <syscall.h>

int main(int, char* []);
void _start(int argc, char* argv[]);

void _start(int argc, char* argv[]) { exit(main(argc, argv)); }
