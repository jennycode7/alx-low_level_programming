#include "main.h"

/**
 * array_range - create arange of numbers
 * @min: minimum number
 * @max: maximum number
 * Return: returns *int
 */
int *array_range(int min, int max)
{
	int *num;
	int cpy, i;

	if (min > max)
	{
		return (NULL);
	}

	num = malloc(sizeof(int) * (max - min) + 1);
	if (num == NULL)
	{
		return (NULL);
	}

	for (i = 0, cpy = min; cpy < min; cpy++, i++)
	{
		num[i] = cpy;
	}
	num[i] = cpy;

	return (num);
}
