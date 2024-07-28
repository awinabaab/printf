#include "main.h"
#include <unistd.h>
#include <stddef.h>

#define BUF_SIZE 1024

/**
 * print_int - Convert an int to a string and write it to standard output
 * @num: Number to be converted and printed
 *
 * Return: Number of characters printed
 */

int print_int(int num)
{
	char buf[BUF_SIZE];
	int index = BUF_SIZE - 1;
	int is_negative = 0;

	if (num < 0)
	{
		num = -num;
		is_negative = 1;
	}

	buf[index--] = '\0';

	do {
		buf[index--] = (num % 10) + '0';
		num /= 10;
	} while (num > 0);

	if (is_negative)
		buf[index--] = '-';

	return (print_str(&buf[index + 1]));
}
