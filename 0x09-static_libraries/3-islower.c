#include <stdio.h>
#include "main.h"


/**
 * _islower - checks for lowercase character
 * @c: single character input
 * Return: returns 1 or 0
 */
int _islower(int c)
{
	int x;

	if (c >= 'a' && c <= 'z')
		x = 1;
	else
		x = 0;
	return (x);
}
