#include "main.h"
#include <unistd.h>
#include <stddef.h>

/**
 * print_char - Prints a character
 * @c: Character to be printed
 * Return: Number of characters printed
 */

int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_str - Prints a string
 * @s: String to be printed
 * Return: Number of characters printed
 */

int print_str(const char *s)
{
	int count;

	if (!s)
		return (0);
	for (count = 0; s[count] != '\0'; count++)
		print_char(s[count]);
	return (count);
}
