#include "main.h"


/**
  * get_bit -function to get bits
  * @n: ...
  * @index: ...
  *
  * Return: ...
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int impair = 0;

	while (n)
	{
		if (impair == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		impair++;
	}

	if (index > impair && index < 63)
		return (0);

	return (-1);
}
