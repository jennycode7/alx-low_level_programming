#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Return: no return
 */
int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	printf("%d\n", res);
	return (0);
}
