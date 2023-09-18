#include "main.h"

/**
 * get_width - width
 * @format: string print arguments
 * @f: intger
 * @list: it is list
 * Return: the width
 */
int get_width(const char *format, int *f, va_list list)
{
	int curr_f;
	int with = 0;

	for (curr_f = *f + 1; format[curr_f] != '\0'; curr_f++)
	{
		if (is_digit(format[curr_f]))
		{
			width *= 10;
			width += format[curr_f] - '0';
		}
		else if (format[curr_f] == '*')
		{
			curr_f++;
			width = va_arg(list, int);
			break;
		}
		else
			break;
	}
	*f = curr_f - 1;

	return (width);
}
