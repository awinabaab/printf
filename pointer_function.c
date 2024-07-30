#include "main.h"

/**
 * print_pointer - Prints an address
 * @addr: Pointer to be printed
 *
 * Return: Number of characters printed
 */

int print_pointer(void *addr)
{
	long ptr = (long)addr;
	int count = 0;

	count += print_str("0x");
	count += ptr_hex_convert(ptr, 16);

	return (count);
}

/**
 * ptr_hex_convert - Converts a long int to hex and prints it to stdout
 * @num: Number to be printed
 * @base: Number base to be printed in
 *
 * Return: Number of characters printed
 */

int ptr_hex_convert(long num, int base)
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
