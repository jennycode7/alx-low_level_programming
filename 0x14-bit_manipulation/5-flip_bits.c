#include "main.h"

/**
 * flip_bits - gets of possible flip bits
 * @n: first number
 * @m: second number
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x;
	unsigned int count = 0;

	if (n == m)
	{
		return (0);
	}

	x = n ^ m;
	while (x)
	{
		if (x & 1)
		{
			count++;
		}
		x = x >> 1;
	}

	return (count);
}
