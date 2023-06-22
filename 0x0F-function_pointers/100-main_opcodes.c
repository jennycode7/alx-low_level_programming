#include <stdio.h>
#include <stdlib.h>

/**
 * get_opcodes - get opcodes
 * @s: string
 * @ac: ...
 */
void get_opcodes(char *s, int ac)
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < ac - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - Entry point
 * @ac: ...
 * @argv: ...
 * Return: 0
 */
int main(int ac, char **argv)
{
	int x;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	get_opcodes((char *)&main, x);

	return (0);
}
