#include "main.h"

/**
 * print_char - prints a character
 * @args: list of arguments
 * @count: current count of printed characters
 * Return: updated count of printed characters
 */
int print_char(va_list args, int count)
{
int ch = va_arg(args, int);

_putchar(ch);
return (count + 1);
}
