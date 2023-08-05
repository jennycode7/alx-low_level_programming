#include "main.h"

/**
 * clear_bit - clear bits
 * @n: number
 * @index: index
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int x;

	if (index > 63)
	{
		return (-1);
	}

	x = *n >> index;
	if (x & 1)
	{
		*n = *n ^ (1 << index);
	}

	return (1);
}
