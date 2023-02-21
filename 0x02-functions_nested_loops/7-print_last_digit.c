#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to be used
 * Return: returns value of last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -1 * n;

	}
	putchar((n % 10) + '0');
	return (n);
}
