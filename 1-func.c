#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _printf - print f func
 * @format: format strinf
 * @...: more num
 * Return: num
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;

	va_start(args, format);

	int printed_chars = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
		i++;
	if (format[i] == 'd' || format[i] == 'i')
	{
		int value = va_arg(args, int);
		char buffer[20];

		snprintf(buffer, sizeof(buffer), "%d", value);
		printf("%s", buffer);
		printed_chars += strlen(buffer);
	}
	else
	{
	}
	}
	else
	{
		putchar(format[i]);
		printed_chars++;
	}
	}

	va_end(args);
	return (printed_chars);
}
/**
 * main - main fun
 *
 * Return: zero
 */
int main(void)
{
	int num = 42;

	_printf("The answer is %d\n", num);
	return (0);
}

