#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - adds integer
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, x;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	for (i = 1; i < argc; i++)
	{
		if (isdigit(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			x = strtol(argv[i], NULL, 10);
			result = result + x;
		}
	}
	printf("%d\n", result);
	return (0);
}
