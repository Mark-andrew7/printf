#include "main.h"

/**
 * print_rev - writes the str in reverse
 * @args: arguments containing the string
 * @buf: buffer pointer
 * @ibuf: index for buffer pointer
 * Return: number of characters printed.
 */
int print_rev(va_list args, char *buf, unsigned int ibuf)
{
char *str = va_arg(args, char *);
unsigned int i;
int length = 0;

if (str == NULL)
{
char *nill = "(llun)";

for (i = 0; nill[i]; i++)
ibuf = handle_buffer(buf, nill[i], ibuf);
return 6;
}

while (str[length] != '\0')
length++;

for (i = length - 1; i > 0; i--)
ibuf = handle_buffer(buf, str[i], ibuf);

return (length);
}
