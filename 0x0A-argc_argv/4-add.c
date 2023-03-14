#include <stdio.h>
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

	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			x = atoi(argv[i]);
			result = result + x;
		}
		printf("%d\n", result);
		return (0);
	}
}
