#include "main.h"

/**
  * flip_bits - flips bit
  * @n: unsigned int
  * @m: unsigned int
  *
  * Return: return value
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int veil = 0, value = 0;

	veil = n ^ m;
	while (veil)
	{
		if (veil & 1)
			value++;

		value >>= 1;
	}

	return (value);
}
