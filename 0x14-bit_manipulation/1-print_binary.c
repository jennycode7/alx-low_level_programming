#include "main.h"

/**
 * print_binary - binary
 * @n: num
 */
void print_binary(unsigned long int n)
{
	int bin[40];
	int x = 0, y = 0, z;

	if (n == 0)
	{
		printf("0");
		return;
	}

	while (n > 0)
	{
		bin[y] = n % 2;
		n /= 2;
		y++;
		x++;
	}

	z = x - 1;

	while ( z >= 0)
	{
		printf("%d", bin[z]);
		z--;
	}
}
