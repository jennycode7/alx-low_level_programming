#include "main.h"


/**
 * flip_bits - flips bits
 * @n: ...
 * @m: ...
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int amount = 0, num = 0;

	num = n ^ m;

	while (num && m != 0)
	{
		if (num & 1)
		{
			amount++;
		}
		num >>= 1;
	}

	return (amount);
}
