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

/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 *
 * Return: Pointer to reversed string
 */

int print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	for (length = length - 1; s[length] != '\0'; length--)
		print_char(s[length]);
	return (length);
}
