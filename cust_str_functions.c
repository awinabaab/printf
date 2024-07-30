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
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 *
 * Return: Number of characters printed
 */

int print_rev(char *s)
{
	int length = 0;
	int count = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	for (length = length - 1; s[length] != '\0'; length--)
	{
		count += print_char(s[length]);
	}
	return (count);
}
