#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: single character input
 * Return: returns 1 or 0
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) ||
	    ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
		return (0);
}
