https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef __LIB_USER_STDIO_H
#define __LIB_USER_STDIO_H

int hprintf(int, const char*, ...) PRINTF_FORMAT(2, 3);
int vhprintf(int, const char*, va_list) PRINTF_FORMAT(2, 0);

#endif /* lib/user/stdio.h */
