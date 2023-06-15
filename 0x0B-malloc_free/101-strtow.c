#include "main.h"

/**
 * strtow - function that returns a double pointer
 * @str: string
 * Return: double pointer
 */
char **strtow(char *str)
{
	char **av;
	int i, j = 0, wc, lc, sc;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ') && (str[i + 1] != ' ')
			&& (str[i + 1] != '\0'))
		{
			j++;
		}
	}

	if (j == 0)
	{
		return (NULL);
	}

	av = malloc(sizeof(char *) * (j + 1));
	if (av == NULL)
	{
		return (NULL);
	}
	for (i = 0, wc = 0; wc < j; wc++)
	{
		while (str[i] == ' ')
		{
			if (str[i + 1] == ' ')
			{
				i++;
			}
			i++;
		}
		lc = 0;
		while (str[i + lc] != ' ' && str[i + lc])
		{
			lc++;
		}
		if (lc == 0)
		{
			return (NULL);
		}
		av[wc] = malloc(sizeof(char) * lc + 1);

		if (!av[wc])
		{
			while (wc--)
			{
				free(av[wc]);
			}
			free(av);
			return (NULL);
		}

		for (sc = 0; sc < lc; sc++)
		{
			av[wc][sc] = str[i++];
		}
		av[wc][sc] = 0;
	}
	av[wc] = NULL;

	return (av);
}
