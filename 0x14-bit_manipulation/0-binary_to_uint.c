#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: pointer to chars
 * Return: returns an unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, value = 0;
	int position = 0;
	const char *c;

	c = b;

	while (*b != '\0')
	{
		b++;
	}
	b--;

	while(b >= c)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		value = *b - '0';
		sum += value * (1 << position);
		position++;
		b--;
	}

	return (sum);
}
