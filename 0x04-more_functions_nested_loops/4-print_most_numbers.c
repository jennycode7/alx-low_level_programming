#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 */
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if ((x == 2) || (x == 4))
			continue;
		else
			putchar(x + '0');
		putchar('\n');
	}
}
