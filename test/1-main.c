#include "../main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>


int main(void)
{
	int num = 9;
	int neg = -7;
	char *str = "{Hello, world]!";
	char ch = 'X';
	int count;

	count = _printf("%d\n", num);
	_printf("%d\n\n", count);

	count = _printf("hey [[%d]\n", neg);
	_printf("%d\n\n", count);

	count = _printf("%i\n", num);
	_printf("%d\n\n", count);

	count = _printf("%c", ch);
	_printf("%d\n\n", count);

	count = _printf("%s %c\n", str, ch);
	_printf("%d\n\n", count);

	count = _printf("%%%%\n");
	_printf("%d\n\n", count);

	count = _printf("(Hello)");
	_printf("%d\n\n", count);

	count = _printf("Hi we are testing %c Hi we are testing %d \
			Hi we are testing %d Hi we are testing %d \
			Hi we are testing %d Hi we are testing %c \
			Hi we are testing\n", ch, neg, num, neg, \
			num, ch);
	_printf("Number of characters %d\n", count);

	return (0);
}
