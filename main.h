#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_str(char *s);
int print_rev(char *s);
int print_int(int n);
int print_num_base(unsigned int, int);
int print_hex_upper(unsigned int);
int format_parser(const char *format, va_list *args);

#endif /* ifndef MAIN_H */
