#include "main.h"

/**
 * clear_bit - clear bits
 * @n: number
 * @index: index
 * Return: int
 */ 
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > 63)
	{
		return (-1);
	}

	x = 1 << index;
	*n = *n & ~x;

	return (1);
}
