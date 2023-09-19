#include "main.h"

/**
 * print_normal_text - prints normal text characters
 * @format_cpy: pointer to the format string
 * @count: pointer to the character count
 */
void print_normal_text(const char **format_cpy, int *count)
{
while (**format_cpy && **format_cpy != '%')
{
_putchar(**format_cpy);
(*count)++;
(*format_cpy)++;
}
}

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
int count = 0;
va_list args;
const char *format_cpy = format;

va_start(args, format);

while (*format_cpy)
{
if (*format_cpy == '%')
{
format_cpy++;
if (*format_cpy == '\0')
break;
count += parse_format(format_cpy, args);
format_cpy++;
}
else
{
print_normal_text(&format_cpy, &count);
}
}

va_end(args);

return (count);
}
