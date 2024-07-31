#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

#define BUF_SIZE 1024

/* Specifier Functions */
int _printf(const char *format, ...);
int print_char(char c);
int print_str(char *s);
int print_int(long int n);
int print_num_base(unsigned int, int);
int ptr_hex_convert(unsigned long, int);
int print_hex_upper(unsigned int);
long int _power(double base, int expo);
int print_u(int num);
int non_print_chars(char *str);
int print_pointer(void *);
int print_rev(char *s);
int rot13(char *s);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/* Length Functions */
/* Long */
int l_print_int(long int);
int l_print_num_base(long int, int);
int l_print_hex_upper(long int);
int l_print_u(long int);

/* Short */
int h_print_int(short int);
int h_print_num_base(short int, int);
int h_print_hex_upper(short int);
int h_print_u(short int);

/* Parser Functions */
int format_parser(const char *format, va_list *args);
int custom_parser(const char *, va_list *);
int l_length_parser(const char *, va_list *);
int h_length_parser(const char *, va_list *);


#endif /* ifndef MAIN_H */
