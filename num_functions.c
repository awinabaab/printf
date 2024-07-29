#include "main.h"

#define BUF_SIZE 1024

/**
 * print_int - Convert an int to a string and write it to standard output
 * @n: Number to be converted and printed
 *
 * Return: Number of characters printed
 */

int print_int(int n)
{
	unsigned int num = n;
	int count;

	count = 0;
	if (n < 0)
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

/**
 * print_num_base - Convert a number to a string and prints it to stdout
 * @num: Number to be printed
 * @base: Number base to be printed in
 *
 * Return: Number of characters printed
 */

int print_num_base(unsigned int num, int base)
{
	char buf[BUF_SIZE];
	int index = BUF_SIZE - 1;
	const char hex_chars[] = "0123456789abcdef";

	buf[index--] = '\0';

	do {
		buf[index--] = hex_chars[num % base];
		num /= base;
	} while (num > 0);

	return (print_str(&buf[index + 1]));
}

/**
 * print_hex_upper - Converts a hex number to a string and prints it to stdout
 * @num: Number to be printed
 *
 * Return: Number of characters printed
 */

int print_hex_upper(unsigned int num)
{
	char buf[BUF_SIZE];
	int index = BUF_SIZE - 1;
	const char hex_chars[] = "0123456789ABCDEF";

	buf[index--] = '\0';

	do {
		buf[index--] = hex_chars[num % 16];
		num /= 16;
	} while (num > 0);

	return (print_str(&buf[index + 1]));
}
