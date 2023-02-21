#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print to 98
 * @n: integer
 * return: no return
 */
void print_to_98(int n)
{
	int x;

	x = 98;

	if (n < x)
	{
		for (n = n; n < x; n++)
		{
			printf("%d, \n", n);
		}
		printf("%d, \n", n);
	}
	else
	{
		for (n = n; n > x; n++)
		{
			printf("%d, \n", n);
		}
		printf("%d, \n", n);
	}
}
