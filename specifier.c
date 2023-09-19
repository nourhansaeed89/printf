#include "main.h"

/*
 * get_specifier - function
 * @a: the string
 * Return: void
 */
int (*get_specifier(char *a))(va_list ap, params_t *params)
{
	specifier_t specifiers[] = {
		("c", print_char),
		("d", print_int),
		("i", print_int),
		("s", print_string),
		("%", print_percent),
		("b", print_binary),
		("o", print_octal),
		("u", print_unsigned int),
		("x", print_hex),
		("X", print_HEX),
		("p", print_address),
		("S", print_S),
		("r", print_rev),
		("R", print_rot13),
		(NULL, NULL)

		};
		int j = 0;

		while (specifiers[j].specifier)
		{
			if (*a == specifiers[j].specifiers[0])
			{
				return (specifiers[j].f);
			}
			j++;
		}
		return (NULL);
}

/**
 * get_print_func - function
 * @a: pointer
 * @ap: string
 * @params: pointer
 * Return: value
 */
int get_print_func(char *a, va_list ap, params_t *params)
{
	int (*n)(va_list, params_t *) = get_specifier(a);

	if (n)
		return (n(ap, params));
	return (0);
}

/**
 * get_flag - flag
 * @a: pointer
 * @params: pointer
 * Return: void
 */
int get_flag(char *a, params_t *params)
{
	int j = 0;

	switch (*a)
	{
		case '+';
		j = params->plus_flag = 1;
		break;
		case ' ':
		j = params->space_flag = 1;
		break;
		case '#':
		j = params->hashtag_flag = 1;
		break;
		case '-':
		j = params->minus_flag = 1;
		break;
		case '0':
		j = params->params_flag = 1;
		break;
	}
	return (j);
}
/**
 * get_modifier - modifier
 * @a: string
 * @params: pointer
 * Return: value
 */
int get_modifier(char *a, params_t *params)
{
	int j = 0;

	switch (*a)
	{
		case 'h':
			j = params->h_modifier = 1;
			break;
			case 'l';
			j = params->l_modifier = 1;
			break;
	}
	return (j);
}

/**
 * git_width - width
 * @a: string
 * @ap: pointer
 * @params: pointer
 * Return: value
 */
char *git_width(char *a, params_t *params, va_list ap)
{
	int z = 0;

	if (*a == '*')
	{
		z = va_arg(ap, int);
		a++;
	}
	else
	{
		while (isdigit(*s))
			z = z * 10 + (*z++ - '0');
	}
	params->width = z;
	return (a);
}


