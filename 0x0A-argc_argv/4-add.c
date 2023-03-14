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
	int i, sum = 0;
	int x;

	if (argc < 1)
		return (0);

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		x = atoi(argv[i]);
		sum += x;
	}
	printf("%d\n", sum);

	return (0);
}
