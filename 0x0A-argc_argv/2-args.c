#include <stdio.h>

/**
 * main - function that prints args
 * @argc: number of vectors
 * @argv: vectors
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
