#include <stdio.h>

/**
 * get_endianess - endianess
 * Return: int
 */
int get_endianness(void)
{
	unsigned int num = 1;

	unsigned char *ptr = (unsigned char*)&num;


	return (*ptr == 1);
}
