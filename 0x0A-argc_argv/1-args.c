#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: array
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}

