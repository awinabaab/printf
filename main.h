#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_str(const char *s);
int print_deci(int n);
int print_psign(void);
void format_parser(const char *format, va_list args);

#endif /* ifndef MAIN_H */
