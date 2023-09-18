#include "main.h"

/**
 * printf_string - print a string.
 * @val: argument.
 * Return: the length of the string.
 */
int printf_string(va_list val)
{
char *str = va_arg(val, char *);

if (str == NULL)
str = "(null)";

int len = _strlen(str);

for (int i = 0; i < len; i++)
_putchar(str[i]);

return len;
}
