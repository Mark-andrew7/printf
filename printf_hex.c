#include "main.h"

/**
 * print_hex - prints an hexadecimal number.
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_hex(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
int i, remainder;
char hex_digits[] = "0123456789abcdef";
char hex_buffer[50];

if (num == 0)
{
_putchar('0');
return (1);
}


while (num != 0)
{
remainder = num % 16;
hex_buffer[count++] = hex_digits[remainder];
num /= 16;
}

for (i = count - 1; i >= 0; i--)
{
_putchar(hex_buffer[i]);
}

return (count);
}
