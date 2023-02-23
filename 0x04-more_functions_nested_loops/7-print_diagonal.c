#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: integer
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
		putchar('\n');
	else
		for (x = 0; x < n; x++)
		{
			for (y = 0; y < x; y++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
}
