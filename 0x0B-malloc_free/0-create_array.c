#include "main.h"



char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	string = malloc(sizeof(char) * size + 1);
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
