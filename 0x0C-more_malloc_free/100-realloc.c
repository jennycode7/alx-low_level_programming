#include "main.h"


/**
 * _realloc - reallocates memory
 * @ptr: string
 * @old_size: old size
 * @new_size: new size
 * Return: new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	str = malloc(new_size);

	if (old_size < new_size)
	{
		old_size = old_size;
	}
	else
	{
		old_size = new_size;
	}

	while (old_size--)
	{
		str[old_size] = ((char *)ptr)[old_size];
	}

	free(ptr);

	return (str);

}
