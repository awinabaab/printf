#include "main.h"

/**
 * print_deci - Prints a number in base 10
 * @n: Number to be printed
 * Return: Number of numbers printed
 */

char *itos_convert(int n)
{
	unsigned int num = n;
	char *str;
	int count;

	if (n < 0)
	{
		print_char('-');
		num = -num;
	}
	if (num / 10)
	{
		itos_convert(num / 10);
		count++;
	}
	str = malloc(sizeof(char) * 1024);
	if (!str)
		return (NULL);
	for (count; count >= 0; count--)
		str[count] = (num / 10);

	return (str);
}
