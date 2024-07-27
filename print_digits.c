#include "main.h"

/**
 * print_deci - Prints a number in base 10
 * @n: Number to be printed
 * Return: Number of numbers printed
 */

int print_deci(int n)
{
	unsigned int num = n;
	int count;

	if (n < 0)
	{
		print_char('-');
		num = -num;
	}
	if (num / 10)
	{
		count = print_deci(num / 10);
	}
	count += print_char((num % 10) + '0');

	return (count);
}
