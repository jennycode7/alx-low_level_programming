#include "main.h"

/**
 * string_nconcat - concatenates string
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: return string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, x, y, z;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		;
	}
	if (n >= i)
	{
		n = i;
	}
	y = strlen(s1);
	str = malloc(sizeof(char) * y + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < y; x++)
	{
		str[x] = s1[x];
	}
	for (z = x, i = 0; z < x + n; z++)
	{
		str[z] = s2[i];
		i++;
	}
	str[z] = '\0';
	return (str);
}
