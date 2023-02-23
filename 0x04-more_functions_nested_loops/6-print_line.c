#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of straight line drawn
 * Return: no return
 */
void print_line(int n)
{
	int x;

	if (x <= 0)
		putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			putchar('-');
		putchar('\n');
	}
}
