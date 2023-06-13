#include "main.h"


/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: returns string
 */
char *str_concat(char *s1, char *s2)
{
	char *string;
	int len1, next, x, i = 0, length;

	if (s2 == NULL)
	{
		s2 = "";
	}
	
	len1 = strlen(s1);

	length = strlen(s1);
	length += strlen(s2);
	string = malloc(sizeof(char) * (length + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < len1; x++)
	{
		string[x] = s1[x];
	}
	
	for (next = x; next < length; next++)
	{
		string[next] = s2[i++];
	}

	return (string);
}
