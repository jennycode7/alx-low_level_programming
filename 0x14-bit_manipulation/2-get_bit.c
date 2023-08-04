#include "main.h"

/**
 * get_bit - get bits
 * @n: ...
 * @index: for index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x, y;

	if (index  > 63)
	{
		return (-1);
	}

	if (index == 0)
	{
		return (n & 1);
	}

	x = n >> index;

	return ((y = x & 1) ? y : -1);
}
