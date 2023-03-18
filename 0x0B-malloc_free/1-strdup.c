#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to be dulicated
 * Return: returns te=he copied string
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, a;

	if (str == NULL)
	{
		return NULL;
	}
	
	i = 1;
	while (str[i])
	{
		i++;
	}
	ptr = malloc((sizeof(char) * i) + 1);

	for (a = 0; a < i; a++)
	{
		ptr[a] = str[a];
	}
	ptr[a] = '\0';

	return (ptr);
}
