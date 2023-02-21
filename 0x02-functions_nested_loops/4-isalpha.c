#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: single character input
 * Return: returns 1 or 0
 */
int _isalpha(int c)
{
	int x;

	if (((c <= 'a') && (c >= 'z')) ||
	    ((c <= 'A') && (c >= 'Z')))
	{
		x = 1;
		return (x);
	}
	else
		x = 0;
		return (x);
}
