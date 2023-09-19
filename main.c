#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

/**
 * main - main funct
 *
 * Return: 0 or 1
 */

int main(void)
{
int num_values;
int *values;

printf("Enter the number of integers: ");
if (scanf("%d", &num_values) != 1 || num_values <= 0)
{
	printf("Invalid input. Please enter a positive integer.\n");
	return (1);
}
values = (int *)malloc(num_values * sizeof(int));
if (values == NULL)
{

	printf("Memory allocation failed. Exiting.\n");
	return (1);
}
for (int i = 0; i < num_values; i++)
{
	printf("Enter integer #%d: ", i + 1);
	if (scanf("%d", &values[i]) != 1)
{
	printf("Invalid input. Please enter a valid integer.\n");
	free(values);
	return (1);
}}
printf("Entered values using 'd' specifier:\n");
printIntegersD(values, num_values);
printf("Entered values using 'i' specifier:\n");
printIntegersI(values, num_values);
free(values);
return (0);
}

