#include "3-calc.h"

/**
 * main - Entry point
 * @ac: counts
 * @argv: arguments
 * Return: 0
 */
int main(int ac, char **argv)
{
	int i, x, y;
	int (*calc)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (ac == 4)
	{
		x = atoi(argv[1]);
		y = atoi(argv[3]);

		calc = get_op_func(argv[2]);
		if (calc == NULL)
		{
			printf("Error\n");
			exit(99);
		}

		i = calc(x, y);
		printf("%d\n", i);
	}
	return (0);
}
