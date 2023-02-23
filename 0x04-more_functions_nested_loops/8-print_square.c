#include <stdio.h>
#include "main.h"

/**
 * print_square -  prints a square
 * @size: size of square
 */
void print_square(int size)
{
	int x, c;

	if (size <= 0)
		putchar('\n');
	else
		for (x = 0; x < size; x++)
		{
			for (c = 0; c < size; c++)
			{
				putchar('#');
			}
			putchar('\n');
		}
}
