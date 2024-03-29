#include "main.h"

/**
 * print_binary - prints a binary
 * @n: integer
 */
void print_binary(unsigned long int n)
{

	if (n == 0)
	{
		putchar('0');
		return;
	}
	else if (n == 1)
	{
		putchar('1');
		return;
	}
	print_binary(n >> 1);

	if (n & 1)
	{
		putchar('1');
	}

	else
	{
		putchar('0');
	}
}
