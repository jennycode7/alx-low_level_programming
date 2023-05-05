#include "main.h"

/**
  * clear_bit - clear bits
  * @n: ..
  * @index: ...
  *
  * Return: 1 or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
