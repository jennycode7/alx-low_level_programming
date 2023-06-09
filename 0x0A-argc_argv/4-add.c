#include <stdio.h>

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
			z = _atoi(argv[x]);
			if (z == 0 && argv[x] != 0)
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

