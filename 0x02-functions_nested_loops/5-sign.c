#include <stdio.h>
#include "main.h"

/**
 * print_sign -  prints the sign of a number
 * @n: integer to check
 * Return: returns 1 , 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		putchar('+');
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
