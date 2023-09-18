#include "main.h"

#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - function that produces output according to a format.
 * @format: character string
 * Return: number of chars printed
 */
int _printf(const char * const format, ...)
{
va_list args;
int count = 0;

va_start(args, format);

const char *format_cpy = format;

while (*format_cpy != '\0')
{
if (*format_cpy == '%')
{
format_cpy++;
if (*format_cpy == '\0')
break;

if (*format_cpy == 'c')
{
char c = va_arg(args, int);
write(1, &c, 1);
count++;
}
else if (*format_cpy == 's')
{
char *str = va_arg(args, char*);
if (str != NULL)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
count++;
}
}
}
}
else if (*format_cpy == '%')
{
write(1, "%", 1);
count++;
}
else
{
write(1, format_cpy, 1);
count++;
}
format_cpy++;
}

va_end(args);
return (count);
}
