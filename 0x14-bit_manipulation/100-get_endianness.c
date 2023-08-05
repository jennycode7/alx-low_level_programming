#include "main.h"

/**
 * get_endianness - get endian
 * Return: int
 */
int get_endianness(void)
{
	int num = 1;
	char *s;

	s = (char *)&num;

	return (*s == 1);
}
