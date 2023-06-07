#include "main.h"

/**
 * _pow_recursion - returns x raised to pow y
 * @x: root
 * @y: power
 * Return: returns result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
