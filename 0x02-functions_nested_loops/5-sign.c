#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_sign - prints an integer's sign
 * @n: integer checked
 * Return: returns 1 , 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		return (-1);
	}
	else
	{
		write(1, "0", 1);
		return (0);
	}
}
