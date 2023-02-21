#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints 24 hours
 * Return: no return
 */
void jack_bauer(void)
{
	int x, i;

	for (x = 0; x < 24; x++)
	{
		for (i = 0; i < 60; i++)
		{
			putchar((x / 10) + '0');
			putchar((x % 10) + '0');
			putchar(':');
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar('\n');
		}
	}
}
