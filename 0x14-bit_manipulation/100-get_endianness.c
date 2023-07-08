#include "main.h"


/**
 * get_endianness - get eindian
 * Return: int
 */
int get_endianness(void)
{
	int n = 1;
	char *bits;

	bits = (char *)&n;

	if (*bits == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
