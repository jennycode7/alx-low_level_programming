#include <stdio.h>


/**
 * _atoi - converts string to integer
 * @s: string
 * Return: returns integer
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	ni *= min;
	return (ni);
}

/**
 * main - entry point
 * @argc: number of vectors
 * @argv: vectors
 * Return: returns 0 or -1
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		x = -1;
		printf("Error\n");
		return (x);
	}
	else if (argc > 3)
	{
		y = -1;
		printf("Error\n");
		return (y);
	}
	else
	{
		x = _atoi(argv[1]);
		y = _atoi(argv[2]);

		printf("%d\n", x * y);
		return (0);
	}
}
