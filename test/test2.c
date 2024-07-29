#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int n = -238797;
	char *str = "[Hello world!]";

    _printf("Hex uppper: %X\nHex lower:%x\nOctal:%o\nBinary: %b\nRev str: %r\n", n, n, n, n, str);
    return (0);
}
