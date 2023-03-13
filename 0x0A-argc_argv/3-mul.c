#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */


int main(int argc, char *argv[])
{
	int i, result = 1, x;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			x = strtol(argv[i], NULL, 10);
			result  = result * x;
		}
	printf("%d\n", result);
	return (0);
	}
}
