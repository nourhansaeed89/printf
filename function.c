#include <stdio.h>

/**
 * printIntegersD - Function to print
 * integers using 'd' format specifier
 *
 * Return: value
*/
void printIntegersD(const int* values, int num_values)
{
	for (int i = 0; i < num_values; i++)
	{
	printf("%d\n", values[i]);
	}
}

/* Function to print integers using 'i' format specific */
void printIntegersI(const int* values, int num_values)
{
	for (int i = 0; i < num_values; i++)
	{
	printf("%i\n", values[i]);
	}
}
