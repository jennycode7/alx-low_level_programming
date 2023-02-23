#include <stdio.h>
#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int x, y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 15)
		{
			if (y >= 10)
			{
				putchar((y / 10) + '0');
			}
			putchar((y % 10) + '0');
			y++;
		}
		putchar('\n');
		x++;
	}
}
