#ifndef _PRINT_H
#define _PRINT_H


#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


#define OUTPUT_BUF_SIZE 1024
#define BUF_FLUSH -1

#define NULL_STRING "(null)"

#define PARAMS_INIT {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
#define CONVERT_LOWERCASE  1
#define CONVERT_UNSIGNED   2

/**
 * struct parameters - param
 *
 * @unsign: has no sign always +
 * @plus_flag: add
 * @hashtag_flag: hash flag
 * @zero_flag: 0 flag
 * @minus_flag: - flag
 * @space_flag - space flag
 *
 * @width: width
 * @precision: spcified value
 *
 * @h_modifier: mod value
 * @l_modifier: l mod val
 */
	typedef struct parameters
{
	unsigned int unsign	  : 1;
	unsigned int plus_flag    : 1;
	unsigned int hashtag_flag : 1;
	unsigned int space_flag   : 1;
	unsigned int zero_flag    : 1;
	unsigned int minus_flag   : 1;

	unsigned int width        : 1;
	unsigned int precision    : 1;

	unsigned int h_modifier   : 1;
	unsigned int l_modifier   : 1;
} params_t;

/**
 * struct specifier - function define
 * @specifier: format
 * @f: func
 */
typedef struct specifier
{
	char *specifier;
	int (*f)(va_list, params_t *);
} specifier_t;

/* _printf.c module */
int _printf(const char *format, ...);
/* _put.c module */
int _puts(char *str);
int _putchar(int c);

/* num.c */
int _isdigit(int c);
int _strlen(char *s);
int print_number(char *str, params_t *params);
int print_number_right_shift(char *str, params_t *params);
int print_number_left_shift(char *str, params_t *params);

/* number.c */
char *convert(long int num, int base, int flags, params_t *params);
int print_unsigned(va_list ap, params_t *params);
/*int print_address(const char *ap, params_t *params);*/


/* params.c */
void init_params(params_t *params, va_list ap);

/* string.c */
char *get_precision(char *p, params_t *params, va_list ap);

/* _print2.c */
int print_from_to(char *start, char *stop, char *except);
int print_rev(va_list ap, params_t *params);
int print_rot13(va_list ap, params_t *params);
/* print_functions.c module */
int print_char(va_list ap, params_t *params);
int print_percent(va_list ap, params_t *params);
int print_string(va_list ap, params_t *params);
int print_s(va_list ap, params_t *params);
int print_int(va_list ap, params_t *params);

/* flags.c module */
int (*get_specifier(char *s))(va_list list, params_t *params);
int get_print_func(int (*get_specifier(char *s))
		(va_list ap, params_t *params));
int get_modifier(char *s, params_t *params);
int get_flag(char *s, params_t *params);
char *get_width(char *s, params_t *params, va_list ap);
int get_size(const char *format, int *i);
#endif
