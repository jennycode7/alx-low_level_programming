#include "main.h"

/**
 * get_bit - get bits
 * @n: ...
 * @index: ...
 * Return: bits
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int x;

	if (n == 0)
	{
		return (0);
	}

	for (x = 0; x < index; x++)
	{
		n /= 2;
	}

	if (index > x && index < 63)
	{
		return (0);
	}

	if ((n & 1) == 1)
	{
		return (1);
	}

	else if ((n & 1) == 0)
	{
		return (0);
	}

	else
	{
		return (-1);
	}
}
