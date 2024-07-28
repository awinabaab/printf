#include <stdarg.h>
#include "main.h"

/**
 * format_parser - Parses a format string and executes the appropriate function
 * @format: Format to be parsed
 * @args: Optional arguments
 * Return: void
 */

void format_parser(const char *format, va_list args)
{
	char ch;
	char *str;
	int num;

	switch (*format)
	{
		case '%':
			print_char('%');
			break;
		case 'c':
			ch = va_arg(args, int);
			print_char(ch);
			break;
		case 's':
			str = va_arg(args, char *);
			print_str(str);
			break;
		case 'd':
			num = va_arg(args, int);
			print_deci(num);
			break;
		case 'i':
			num = va_arg(args, int);
			print_deci(num);
			break;
	}
}
