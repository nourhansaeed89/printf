#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);

/* functions to print chars and strings and integers */
int print_char(va_list type);
int print_string(va_list type);
int print_percent(va_list type);
int print_int(va_list type);

#endif /* MAIN_H */
