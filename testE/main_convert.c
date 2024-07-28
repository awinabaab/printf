#include "../main.h"
#include <stdio.h>

int main(void)
{
	int count;
	count = print_deci(-43657);
	printf("\n%d\n", count);
	count = print_deci(43657);
	printf("\n%d\n", count);

	return (0);
}
