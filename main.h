#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct format - matches conversion specifiers
 * @type: it is a format
 * @f: type pointer to function
 */
typedef struct format
{
char type;
int (*f)(va_list, char *, unsigned int);
} format_t;


int printf_int(va_list args);
int print_char(va_list args);
unsigned int handle_buffer(char *buf, char c, unsigned int ibuf);
int print_binary(va_list args);
int print_string(va_list args, int count);
int print_rev(va_list args, char *buf, unsigned int ibuf);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
