#include "main.h"
#include <stdarg.h>

/**
 * print_binary - prints a binary number.
 * @args: argument list.
 * Return: number of characters printed.
 */
int print_binary(va_list args)
{
int flag = 0;
int count = 0;
int i, bit;
unsigned int num = va_arg(args, unsigned int);

for (i = 31; i >= 0; i--)
{
bit = (num >> i) & 1;
if (bit || flag)
{
_putchar(bit + '0');
count++;
flag = 1;
}
}

if (count == 0)
{
_putchar('0');
count = 1;
}

return (count);
}
