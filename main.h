#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/* prototypes */
int _printf(const char *format, ...);
int _putchar(char c);

/* Conversion specifiers */
int print_string(va_args(args, char *));
int print_rev_strings(va_list args);
int print_rot13(va_list args);
int print_hexadecimal(va_list args);
int print_pointer(va_list args);
int print_unsigned(va_list args);
int print_char(va_list args);
int print_binary(va_list args);
int print_octal(va_list args);
int print_width(const char *format, int *i, va_list);
int print_decimal(const char *format, ...);
#endif /* MAIN_H */
