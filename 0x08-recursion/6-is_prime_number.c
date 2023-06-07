#include "main.h"

/**
 * is_prime_number - checks for prime number
 * @n: number to check
 * Return: returns 0 or 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime(n, 2));
}

/**
 * prime - is_prime_number support function
 * @num: number
 * @root: factors to use
 * Return: returns 0 or 1
 */
int prime(int num, int root)
{
	if (root >= num)
	{
		return (1);
	}
	else if (num % root == 0)
	{
		return (0);
	}
	else
	{
		return (prime(num, root + 1));
	}
}
