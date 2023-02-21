#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times in lowercase
 * return: no return
 */
void print_alphabet_x10(void)
{
	int x, i;

	for (x = 0; x <= 10; x++)
	{
		for (i = 'a'; x <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
	}
}
