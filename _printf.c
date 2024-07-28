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

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			format_parser(format, args);
		}
		else
			print_char(*format);
		format++;
	}
	va_end(args);

	return (0);
}
