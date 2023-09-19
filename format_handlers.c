#include "main.h"

/**
 * parse_format - parses and handles format specifiers
 * @format: pointer to the format string
 * @args: va_list containing the arguments
 * Return: number of characters printed for this format
 */
int parse_format(const char *format, __attribute__((unused)) va_list args)
{
if (*format == 'd' || *format == 'i')
{
return (0);
}

else if (*format == 's')
{
return (0);
}

else if (*format == 'c')
{
return (0);
}


return (0);
}
