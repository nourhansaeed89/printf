#include "main.h"

/**
 * print_form_to - print range of char
 *
 * @start: start of add
 * @stop: stop of sdd
 * @except: exceptions
 *
 * Return: sum
 */
int print_from_to(char *start, char *stop, char *except)
{
	int add = 0;

	while (start <= stop)
	{
		if (start != except)

			add += _putchar(*start);
		start++;
	}
return (add);
}

/**
 * print_rev - print string
 *
 * @ap: string
 * @params: parameters
 *
 * Return: sun
 */
int print_rev(va_list ap, params_t *params)
{
	int len;
	int add = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (len = 0; len > 0; len--, str--)
			add += _putchar(*str);

	}
	return (add);
}

/**
 * print_rot13 - prints string
 *
 * @ap: string
 * @params: param
 *
 * Return: number
 */
int print_rot13(va_list ap, params_t *params)
{
	int i, ind;
	int count = 0;
	char arr[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLM	nopqrstuvwxyzabcdefghijklm";	
	char *a = va_arg(ap, char *);
	(void)params;

	i = 0;
	ind = 0;

	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z')
				|| (a[i] >= 'a' && a[i] <= 'z'))
		{
			ind = a[i] - 65;
			count += _putchar(arr[ind]);
		}
		else
			count += _putchar(a[i]);
		i++;
	}
	return (count);
}

