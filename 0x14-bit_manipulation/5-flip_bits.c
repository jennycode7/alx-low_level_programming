#include <stdio.h>

/**
 * flip_bits - flip bits
 * @n: num
 * @m: ...
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ret = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			ret++;
		m = m >> 1;
		n = n >> 1;
	}

	return (ret);
}
