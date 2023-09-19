#include "main.h"

/**
 * print_int - prints an integer
 * @arguments: input string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of chars printed.
 */
int print_int(va_list arguments, char *buf, unsigned int ibuf)
{
int num = va_arg(arguments, int);
unsigned int abs_num = (num < 0) ? -num : num;
int is_negative = (num < 0) ? 1 : 0;
int digits = 0;

if (is_negative)
ibuf = handle_buffer(buf, '-', ibuf);

while (abs_num > 0)
{
ibuf = handle_buffer(buf, (abs_num % 10) + '0', ibuf);
abs_num /= 10;
digits++;
}

return (digits + is_negative);
}
