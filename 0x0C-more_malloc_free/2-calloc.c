#include "main.h"

#include "main.h"

/**
 * _memset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

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

	_memset(str, 0, size * nmemb);

	return (str);
}
