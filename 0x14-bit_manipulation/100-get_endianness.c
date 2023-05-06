#include "main.h"

/**
 * get_endianness - checks endianess.
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int wc;
	char *b = (char *) &x;

	wc = 1;
	return ((int)*b);
}
