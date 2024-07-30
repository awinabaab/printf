#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

#define BUF_SIZE 1024

int _printf(const char *format, ...);
int print_char(char c);
int print_str(char *s);
int print_int(long int n);
int print_num_base(unsigned int, int);
int ptr_hex_convert(long, int);
int print_hex_upper(unsigned int);
long int _power(double base, int expo);
int print_u(int num);
int non_print_chars(char *str);
int print_pointer(void *);
int format_parser(const char *format, va_list *args);
int custom_parser(const char *, va_list *);

#endif /* ifndef MAIN_H */
