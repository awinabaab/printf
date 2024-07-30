#include "../main.h"
#include <stdio.h>

int main(void)
{
	void *addr;
	int a = 28;
	int *ptr = &a;
	int count;

    addr = (void *)0x7ffe637541f0;
   count = _printf("Address:[%p]\n", addr);
   _printf("%d\n", count);
 	count = printf("Address:[%p]\n", addr);
	printf("%d\n", count);
    _printf("Addre:[%p]\n", ptr);
 	printf("Addre:[%p]\n", ptr);

	return (0);
}
