#include "main.h"

/**
 * _printf - print function
 * @format: string
 * Return: void
 */
int _printf(const char *format, ...)
{
	int s = 0;
	va_list ap;
	char *b, *start;
	params_t params = PARAMS_INIT;

	va_start(ap, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] ' ' && !format[2])
		return (-1);
	for (b = (char *)format; *b; b++)
	{
		init_params(&params, ap);
		if (*b != '%')
		{
			s += _putchar(*b);
			continue;
		}
		start = b;
		b++;
		while (get_flags(b, &params)) /* char at */
		{
			b++; /* next */
		}
		b = get_width(b, &params, ap);
		b = get_precision(b, &params, ap);
		if (get_modifier(b, &params))
			b++;
		if (!get_specifier(b))
			s += print_from_to(start, b,
					params.l_modifier || param.h_modifier ? b - 1 : 0);
		else
			s += get_print_func(b, ap, &params);
	}
	putchar (BUF_FLUSh);
	va_end(ap);
	return (s);
}

