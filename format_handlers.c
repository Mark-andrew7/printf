#include "main.h"

/**
 * parse_format - parses and handles format specifiers
 * @format: pointer to the format string
 * @args: va_list containing the arguments
 * Return: number of characters printed for this format
 */
int parse_format(const char *format, va_list args)
{

if (*format == 'd' || *format == 'i')
{
return (print_int(args, NULL, 0));
}

else if (*format == 's')
{
return (print_string(args));
}

else if (*format == 'c')
{
return (print_char(args));
}

return (0);
}
