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

int print_str(char *s)
{
	int count;

	count = 0;
	if (!s)
		return (count);
	for (count = 0; s[count] != '\0'; count++)
		print_char(s[count]);
	return (count);
}
