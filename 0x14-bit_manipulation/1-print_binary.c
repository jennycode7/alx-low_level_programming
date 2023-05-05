#include "main.h"


/**
 * print_binary - ...
 * @n: ...
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	get_bin(n);
}

/**
 * get_bin - ...
 * @x: ...
 */

void get_bin(unsigned long int x)
{
	if (x < 1)
	{
		return;
	}
	get_bin(x >> 1);

	if (x & 1)
	{
		putchar('1');
	}

	else
	{
		putchar('0');
	}
}
