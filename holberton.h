#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _print_perc(__attribute__((unused)) va_list list);
int _print_char(va_list list);
int _print_string(va_list list);

#endif
