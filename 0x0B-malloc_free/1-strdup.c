#include "main.h"

/**
 * _strdup - function that duplicates string
 * @str: string
 * Return: returns duplicated string
 */
char *_strdup(char *str)
{
	char *strcpy;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	strcpy = malloc(sizeof(char) * len + 1);

	if (strcpy == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		strcpy[i] = str[i];
	}

	return (strcpy);
}
