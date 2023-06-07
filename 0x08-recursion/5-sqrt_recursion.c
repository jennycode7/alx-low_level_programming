#include "main.h"

/**
 * _sqrt_recursion - returns square root of a num
 * @n: The number
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 1));
}

/**
 * square_root - finds square root
 * @num: number
 * @root: guessed root
 * Return: result
 */
int square_root(int num, int root)
{
	if (root * root > num)
	{
		return (-1);
	}
	else if (root * root == num)
	{
		return (root);
	}
	else
	{
		return (square_root(num, root + 1));
	}
}
