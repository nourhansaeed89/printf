#include "main.h"

/**
 * get_flags - flags
 * @format: format
 * @j: pointer
 * Return: value
 */
int get_flags(const char *format, int *j)
{
	/* - + 0 # ' ' */
	/* 1 2 4 8 16 */
	int k, curr_j;
	int flags = 0;
	const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
	const int FLAGS_ARR[] = {minus_flag, plus_flag, zero_flag, hashtag_flag, space_flag, 0};

	for (curr_j = *j + 1; format[curr_j] != '\0'; curr_j++)
	{
		for (k = 0; FLAGS_CH[k] != '\0'; k++)
			if (format[curr_j] == FLAGS_CH[k])
			{
				flags |= FLAGS_ARR[k];
				break;
			}
		if (FLAGS_CH[k] == 0)
			break;
	}
	*j = curr_j - 1;

	return (flags);
}
