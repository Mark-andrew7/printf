#include "main.h"

/**
 * print_octal - prints an octal number.
 * @args: list of arguments
 * Return: number of characters printed
 */
int print_octal(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
int count = 0;
int i;
char octal_buffer[50];

if (num == 0)
{
_putchar('0');
return (1);
}

while (num != 0)
{
octal_buffer[count++] = (num % 8) + '0';
num /= 8;
}

for (i = count - 1; i >= 0; i--)
{
_putchar(octal_buffer[i]);
}

return (count);
}
