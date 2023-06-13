#include "main.h"

/**
 * create_array - this function creates an array
 * @size: size of array
 * @c: used for initialization
 * Return: array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	string = malloc(sizeof(char) * size);
	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}

	return (string);
}
