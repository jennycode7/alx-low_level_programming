#include "main.h"

/**
 * malloc_checked - mallocs memory
 * @b: size
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *str;
	unsigned int x;

	x = b;
	str = malloc(x);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
