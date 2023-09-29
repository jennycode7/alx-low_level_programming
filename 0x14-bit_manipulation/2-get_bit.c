#include "main.h"

/**
 * get_bit - get bit
 * @n: number
 * @index: index
 * Return: return int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	if (n & (1 << index))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
