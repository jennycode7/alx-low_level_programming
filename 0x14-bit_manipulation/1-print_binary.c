#include "main.h"

/**
 * print_binary - binary
 * @n: num
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}

	binary(n);
}

/**
 * binary - for binary
 * @n: ...
 */
void binary(unsigned long int n)
{
	if (n < 1)
	{
		return;
	}

	binary(n >> 1);

	if ((n & 1) == 1)
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
}
