#include "../main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int main(void)
{
	int num = -123;
	char *str = "Hello, world!";
	char ch = 'A';
/*	unsigned int u_num = 456; */
/*  unsigned int hex_num = 0xdeadbeef; */
/*	unsigned int hex_upper = 0xDEAFBEEF; */

	_printf("%d\n", num);
	_printf("%i\n", num);
	_printf("%c\n", ch);
	_printf("%s\n", str);
	_printf("%%\n");
	_printf("%s\n", "Hello World!");
	_printf("%c\n", 'c');
	_printf("Hello!\n");
	_printf("%\n");
	_printf("Hi %d, how %i, wh %c, hn %s, ij %%\n", num, num, ch, str);
	
/*	_printf("Integer: %d\nUnsigned: %u\nString: %s\nChar: %c\nHex lower: %x\nHex upper: %X\n", num, str, ch); */
	return (0);
}
