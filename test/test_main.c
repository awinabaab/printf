#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;
    int count;
	long int ld = 127000000000509;
	long int li = 127457452984509;
	long int lo = 98;
	long int lu = 300;
	long int lhl = 11;
	long int lhu = 11;
/*	short int sd = 300;
	short int si = 300;
*/
	short int so = 98;
	short int su = 300;
	short int shl = 11;
	short int shu = 11;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len2);
    printf("Len:[%d]\n", len);
    _printf("Non-printable:[%S]\n\n\n\n", "Best\nSchool");

   count =  _printf("Unknown: [%R]\n[%R]\n", "ABYcdrDbfgcd", "123");
   printf("%d\n", count);

   _printf("CUSTOM printf");
   _printf("LONG\n");
   count =  _printf("Long int: [%ld]\n", ld);
   printf("%d\n", count);
   count =  _printf("Long int: [%li]\n", li);
   printf("%d\n", count);
   count =  _printf("Long octal: [%lo]\n", lo);
   printf("%d\n", count);
   count =  _printf("Long unsigned: [%lu]\n", lu);
   printf("%d\n", count);
   count =  _printf("Long Hex lower: [%lx]\n", lhl);
   printf("%d\n", count);
   count =  _printf("Long Hex upper: [%lX]\n", lhu);
   printf("%d\n", count);
   _printf("\n\n\n");
   _printf("SHORT\n");
   count =  _printf("Short int: [%hd]\n", 12700000000509);
   printf("%d\n", count);
   count =  _printf("Short int: [%hi]\n", 127457452984509);
   printf("%d\n", count);
   count =  _printf("Short octal: [%ho]\n", so);
   printf("%d\n", count);
   count =  _printf("Short unsigned: [%hu]\n", su);
   printf("%d\n", count);
   count =  _printf("Short Hex lower: [%hx]\n", shl);
   printf("%d\n", count);
   count =  _printf("Short Hex upper: [%hX]\n", shu);
   printf("%d\n", count);
   _printf("\nREGULAR printf");
   printf("LONG\n");
   count =  printf("Long int: [%ld]\n", ld);
   printf("%d\n", count);
   count =  printf("Long int: [%li]\n", li);
   printf("%d\n", count);
   count =  printf("Long octal: [%lo]\n", lo);
   printf("%d\n", count);
   count =  printf("Long unsigned: [%lu]\n", lu);
   printf("%d\n", count);
   count =  printf("Long Hex lower: [%lx]\n", lhl);
   printf("%d\n", count);
   count =  printf("Long Hex upper: [%lX]\n", lhu);
   printf("%d\n", count);
   _printf("\n\n\n");
   _printf("SHORT\n");
   count =  printf("Short int: [%hd]\n", 12700000000509);
   printf("%d\n", count);
   count =  printf("Short int: [%hi]\n", 127457452984509);
   printf("%d\n", count);
   count =  printf("Short octal: [%ho]\n", so);
   printf("%d\n", count);
   count =  printf("Short octal: [%ho]\n", so);
   count = printf("Short unsigned: [%hu]\n", su);
   printf("%d\n", count);
   count =  printf("Short Hex lower: [%hx]\n", shl);
   printf("%d\n", count);
   count =  printf("Short Hex upper: [%hX]\n", shu);
   printf("%d\n", count);


    return (0);
}
