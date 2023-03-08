https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef DEVICES_INPUT_H
#define DEVICES_INPUT_H

#include <stdbool.h>
#include <stdint.h>

void input_init(void);
void input_putc(uint8_t);
uint8_t input_getc(void);
bool input_full(void);

#endif /* devices/input.h */
