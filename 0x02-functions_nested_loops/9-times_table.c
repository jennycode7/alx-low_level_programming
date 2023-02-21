#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * Return: no return
 */
void times_table(void)
{
	int x, i;
	int c;

	for (x = 0; x <= 9 ; x++)
	{
		for (i = 0; i <= 9; i++)
		{
			c = (x * i);
			if (i != 0)
			{
				putchar(',');
				putchar(' ');
			}
			if (c >= 10)
			{
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
			}
			else if (c < 10 && i != 0)
			{
				putchar(' ');
				putchar((c % 10) + '0');
			}
			else
				putchar((c % 10) + '0');
		}
		putchar('\n');
	}
}
