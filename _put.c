#include "main.h"


/**
 * _puts - function to print string
 *
 * @str: input string
 *
 * Return: void
 *i
 */

int _puts(char *str)
{
	char *x = str;

	while (*str)
		_putchar(*str++);
	return (str - x);
}

/**
 * _putchar - used to write char
 *
 * @c: input char
 *
 * Return: 1 if right and -1 if error
 */
int _putchar(int c)
{
	static int j;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || j >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, j);
		j = 0;
	}
		if (c != BUF_FLUSH)
			buf[j++] = c;
		return (1);
}

