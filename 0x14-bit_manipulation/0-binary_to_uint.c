#include "main.h"

/**
 * binary_to_uint - binary to integer
 * @b: const char
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	const char *copy;
	unsigned int num = 0;
	unsigned int result = 0, value, x;


	if (b == NULL)
	{
		return (0);
	}

	copy = b;

	while (*b != '\0')
	{
		b++;
	}
	b--;

	while (b >= copy)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		x = *b - '0';
		value = x * (1 << num);
		result += value;

		num++;
		b--;

	}

	return (result);

}
