#include "main.h"

/**
 * non_print_chars - Prints the hex code of non-printable ASCII characters
 * @str: Non-printable character
 *
 * Return: Number of characters printed
 */

int non_print_chars(char *str)
{
	int count;

	count = 0;
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			count += print_str("\\x");
			count += print_hex_upper((unsigned char) *str / 16);
			count += print_hex_upper((unsigned char) *str % 16);
		}
		else
			count += print_char(*str);
		str++;
	}
	return (count);
}

/**
 * print_pointer - Prints an address
 * @addr: Pointer to be printed
 *
 * Return: Number of characters printed
 */

int print_pointer(void *addr)
{
	unsigned long ptr = (unsigned long)addr;
	int count = 0;
	
	count += print_str("0x");
	count += print_num_base(ptr, 16);

	return (count);
}
