#include <stdio.h>

/**
 * _abs - prints absolute value of an integer
 * @x: integer to valuate
 * Return: returns absolute value of x
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = (-1) * x;
	}
	return (x);
}
