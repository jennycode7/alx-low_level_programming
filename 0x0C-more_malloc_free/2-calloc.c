#include "main.h"


/**
 * _calloc - allocates memory
 * @nmemb: ...
 * @size: size of bytes
 * Return: returns pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *str;
	unsigned int x;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	x = size;
	str = malloc(nmemb * x);
	if (str == NULL)
	{
		return (NULL);
	}
	return (str);
}
