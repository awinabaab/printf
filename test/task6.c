#include "../main.h"
#include <stdio.h>

int main(void)
{
	void *addr;
	int a = 28;
	char c = '*';
	float f = 0.0;
	double d = 0.0;
	char ch = ';';
	char *s = &ch;
	char **str = &s;
	int count;

    addr = (void *)0x7ffe637541f0;
   count = _printf("Address:[%p]\n", addr);
   _printf("%d\n", count);
 	count = printf("Address:[%p]\n", addr);
	printf("%d\n", count);
    _printf("Addre:[%p]\n", &a);
 	printf("Addre:[%p]\n", &a);
    _printf("Addre:[%p]\n", &c);
 	printf("Addre:[%p]\n", &c);
    _printf("Addre:[%p]\n", &f);
 	printf("Addre:[%p]\n", &f);
    _printf("Addre:[%p]\n", &d);
 	printf("Addre:[%p]\n", &d);
    _printf("Addre:[%p]\n", &ch);
 	printf("Addre:[%p]\n", &ch);
    _printf("Addre:[%p]\n", *str);
 	printf("Addre:[%p]\n", *str);


	return (0);
}
