#include <stdio.h>
#include "main.h"

/**
 * _isdigit -  checks for a digit
 * @c: integer to be checked
 * Return: return 1 or 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
