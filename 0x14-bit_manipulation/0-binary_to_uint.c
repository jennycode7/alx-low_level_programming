#include "main.h"

/**
 * binary_to_uint - converts binary
 * @b: char
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0, y = 0, sum = 0;
	const char *s;
	int power = 0;

	if (b == NULL)
	{
		return (0);
	}

	s = b;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		b++;
	}
	b--;

	while (b >= s)
	{
		y = *b - '0';
		x = y * (1 << power);
		sum += x;
		power++;
		b--;
	}

	return (sum);
}
