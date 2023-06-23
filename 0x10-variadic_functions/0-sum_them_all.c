#include "variadic_functions.h"

/**
 * sum_them_all - sum function
 * @n: number of arg
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x = 0, i = 0;
	va_list ap;

	if (n == 0)
	{
		return (0);
	}

	va_start(ap, n);

	while (i < n)
	{
		x += va_arg(ap, unsigned int);
		i++;
	}

	va_end(ap);

	return (x);
}
