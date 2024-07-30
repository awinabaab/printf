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

    void *address = NULL;
    void *add = (void*)0x1234abcd;
    void *ad = (void*)0xffffffffffffffff;
    void *addd = (void*)0x0;
    void *ad1 = (void*)0x1a2b3c4d;

    _printf("Address:[%p]\n", address);
    printf("Address:[%p]\n", address);
    _printf("Address:[%p]\n", add);
    printf("Address:[%p]\n", add);
    _printf("Address:[%p]\n", ad);
    printf("Address:[%p]\n", ad);
    _printf("Address:[%p]\n", addd);
    printf("Address:[%p]\n", addd);
    _printf("Address:[%p]\n", ad1);
    printf("Address:[%p]\n", ad1);



    return (0);
}
