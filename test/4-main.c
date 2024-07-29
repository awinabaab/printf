#include <stdio.h>
#include "../main.h"

int main(void)
{
	int num = -9;
	int result;

	result = print_u(num);
	printf("\n%d\n", result);
	_printf("\n%u\n", num);

	return (0);
}
