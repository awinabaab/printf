#include "../main.h"
#include <stdio.h>

int main(void)
{
	int count;

	count = print_char('y');
	printf("\n%d\n", count);
	count = print_str("hello\n");
	printf("%d\n", count);

	return(0);
}
