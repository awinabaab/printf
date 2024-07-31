#include <stdarg.h>
#include "main.h"

/**
 * _printf - Formats and prints data
 * @format: Foramt to be printed
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			count += format_parser(format, &args);
			if (*format == 'l' || *format == 'h')
				format++;
		}
		else
			count += print_char(*format);
		format++;
	}
	va_end(args);

	return (count);
}
