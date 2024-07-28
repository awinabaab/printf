#include "main.h"
#include <unistd.h>
#include <stddef.h>

/**
 * print_int - Convert an int to a string and write it to standard output
 * @num: Number to be converted and printed
 *
 * Return: Number of characters printed
 */

int print_int(int n)
{
	int num = n;
	int count;

	count = 0;
	if (num < 0)
	{
		count += print_char('-');
		num = -num;
	}

	if (num / 10)
	{
		count += print_int(num / 10);
	}
	count += print_char((num % 10) + '0');

	return (count);
}
