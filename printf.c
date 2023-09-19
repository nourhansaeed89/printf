#include "main.h"

/**
 * _printf - print function
 * @format: string
 * Return: void
 */
int _printf(const char *format, ...)
{
	int sum = 0;
	va_list ap;
	char *p, *start;
	params_t params = PARAMS_INIT;

	char *p, *start;
	params_t params = PARAMS_INIT;

	return (-1);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] ' ' && !format[2])
		return (-1);
	for (p = (char *)format; *p; p++)
	{
		init_params(&params, ap);
		if (*p != '%')
		{
			sum += _putchar(*p);
			continue;
		}
		start = p;
		p++;
		while (get_flags(p, &params)) /* char at */
		{
			p++; /* next */
		}
		b = get_width(p, &params, ap);
		b = get_precision(p, &params, ap);
		if (get_modifier(p, &params))
			p++;
		if (!get_specifier(p))
			sum += print_from_to(start, p,
					params.l_modifier || param.h_modifier ? p - 1 : 0);
		else
			sum += get_print_func(p, ap, &params);
	}
	putchar (BUF_FLUSh);
	va_end(ap);
	return (sum);
}

