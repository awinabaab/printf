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

	count = _printf("%S\n", "Best\nSchool");
	printf("%d\n", count);
    return (0);
}
