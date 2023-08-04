#include "main.h"

/**
 * binary_to_uint - conveter
 * @b: const char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, x;
	int binary, power = 0;
	const char *holder;

	if (b == NULL)
	{
		return (0);
	}

	holder = b;

	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
		{
			return (0);
		}
		b++;
	}
	b--;

	while (b >= holder)
	{
		x = *b - '0';
		binary = x * (1 << power);
		result += binary;
		power++;
		b--;
	}

	return (result);
}
