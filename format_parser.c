#include "main.h"
#include <stdarg.h>

/**
 * format_parser - Parses a format string and executes the appropriate function
 * @format: Format to be parsed
 * @args: Optional arguments
 * Return: void
 */

int format_parser(const char *format, va_list *args)
{
	char ch;
	char *str;
	int num;
	int count;

	switch (*format)
	{
		case '%':
			count = print_char('%');
			break;
		case 'c':
			ch = va_arg(*args, int);
			count = print_char(ch);
			break;
		case 's':
			str = va_arg(*args, char *);
			count = print_str(str);
			break;
		case 'd':
			num = va_arg(*args, int);
			count = print_int(num);
			break;
		case 'i':
			num = va_arg(*args, int);
			count = print_int(num);
			break;
	}
	return (count);
}
