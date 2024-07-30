#include "../main.h"
#include <stdio.h>

int main(void)
{
	void *addr;
	int a = 28;
	int *ptr = &a;

    addr = (void *)0x7ffe637541f0;
    _printf("Address:[%p]\n", addr);
 	printf("Address:[%p]\n", addr);
    _printf("Addre:[%p]\n", ptr);
 	printf("Addre:[%p]\n", ptr);

	return (0);
}
