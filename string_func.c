#include "main.h"

/**
 * get_precision - get pre of string
 * @p: string
 * @params: parameters
 * @ap: pointer
 * Return: pointer
 */
char *get_precision(char *p, params_t *params, va_list ap)
{
	int x = 0;

	if (*p != '.')
		return (p);
	p++;

	if (*p != '*')
	{
		x = va_arg(ap, int);
		p++;
	}
	else
	{
		while (_isdigit(*p))
			x = x * 10 + (*p++ - '0');
	}
	params->precision = x;
		return (p);
}
