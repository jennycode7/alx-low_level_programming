#include "main.h"

/**
 * argstostr - function that concatenates string
 * @ac: number of arg
 * @av: args
 * Return: return string
 */
char *argstostr(int ac, char **av)
{
	int i, x, len = 0, wc;
	char *argv;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	argv = malloc(sizeof(char) * len + 1);
	if (argv == NULL)
	{
		return (NULL);
	}

	for (i = 0, x = 0; x < ac; x++)
	{
		for (wc = 0; av[x][wc]; wc++, i++)
		{
			argv[i] = av[x][wc];
		}
		argv[i++] = '\n';
	}
	argv[i] = '\0';

	return (argv);
}
