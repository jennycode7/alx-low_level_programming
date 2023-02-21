#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times in lowercase
 * return: no return
 */
void print_alphabet_x10(void)
{
	int x, i;

	x = 0;
	while (x < 10)
	{
		i = 'a';
		while (i < 'z')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		x++;
	}
}
