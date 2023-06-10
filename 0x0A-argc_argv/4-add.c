#include <stdio.h>

/**
  * _strcmp - Compares two strings
  * @s1: The first string
  * @s2: The second string
  *
  * Return: int value
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, r = 0, lim;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}

	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			r = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (r);
}

/**
 * _atoi - converts string to integer
 * @s: string
 * Return: returns result
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
 * _strchr - locates charcter
 * @s: ..
 * @c: ..
 * Return: return 1 or 0
 */
int _strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (1);
		}
	} while (*s++ != '\0');

	return (0);
}
/**
 * main - entry point
 * @argc: number of vectors
 * @argv: vectors
 * Return: returns 0
 */
int main(int argc, char **argv)
{
	int x = 0, y = 0, z = 0;

	if (argc == 1)
	{
		printf("%d\n", y);
	}

	else
	{
		for (x = 1; x < argc; x++)
		{
			if (_strchr(argv[x], 'e') != 0)
			{
				printf("Error\n");
				return (1);
			}
			z = _atoi(argv[x]);
			if (z == 0 && _strcmp(argv[x], "0") != 0)
			{
				printf("Error\n");
				return (1);
			}
			y += z;
		}
		printf("%d\n", y);
	}
	return (0);
}

