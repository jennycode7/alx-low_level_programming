#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints an integer's sign
 * @n: integer checked
 * Return: returns 1 , 0 or -1
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		putchar('+');
		return (x);
	}
	else if (n == 0)
	{
		x = 0;
		putchar('0');
		return (x);
	}
	else if (n < 0)
	{
		x = -1;
		putchar('-');
		return (x);
	}
	else
	{
		x = '/';
		putchar('-');
		return (x);
	}
}
