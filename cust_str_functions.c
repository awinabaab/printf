#include "main.h"
#include <stdlib.h>

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

	if (s == NULL)
		s = "(null)";
	else
	{
		while (s[length] != '\0')
		{
			length++;
		}
		for (length = length - 1; s[length] != '\0'; length--)
		{
			count += print_char(s[length]);
		}
	}
	return (count);
}

/**
 * _strcpy - Copy string from source to destination
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - Checks for the length of a string
 * @s: String to check length of
 *
 * Return: Length of a string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * rot13 - Encodes a code using rot13
 * @s: String to be encoded
 *
 * Return: Pointer to encoded string at s
 */

int rot13(char *s)
{
	char *str;
	int sub, encoder;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *encode = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int count = 0;
	int flag = 0;

	if (!s)
		s = "(null)";
	str = malloc(sizeof(char) * _strlen(s) + 1);
	if (!str)
	{
		return (count);
	}
	str = _strcpy(str, s);
	for (sub = 0; str[sub] != '\0'; sub++)
	{
		flag = 0;
		for (encoder = 0; encoder < 52; encoder++)
		{
			if (s[sub] == alpha[encoder])
			{
				str[sub] = encode[encoder];
				count += print_char(str[sub]);
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			count += print_char(str[sub]);
	}
	free(str);
	return (count);
}
