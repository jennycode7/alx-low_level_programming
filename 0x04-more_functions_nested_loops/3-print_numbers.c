#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
}
