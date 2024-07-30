#include "../main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count;

	count = _printf("%+d\n", 17);
	printf("%d\n", count);
    return (0);
}
