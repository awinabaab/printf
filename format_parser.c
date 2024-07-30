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
	int count;

	switch (*format)
	{
		case '%':
			count = print_char('%');
			break;
		case 'c':
			count = print_char(va_arg(*args, int));
			break;
		case 's':
			count = print_str(va_arg(*args, char *));
			break;
		case 'd':
			count = print_int(va_arg(*args, int));
			break;
		case 'i':
			count = print_int(va_arg(*args, int));
			break;
		case 'b':
			count = print_num_base(va_arg(*args, unsigned int), 2);
			break;
		case 'x':
			count = print_num_base(va_arg(*args, unsigned int), 16);
			break;
		case 'X':
			count = print_hex_upper(va_arg(*args, unsigned int));
			break;
		case 'o':
			count = print_num_base(va_arg(*args, unsigned int), 8);
			break;
		case 'u':
			count = print_u(va_arg(*args, int));
			break;
		case 'S':
			count = non_print_chars(va_arg(*args, char *));
			break;
	}
	return (count);
}
