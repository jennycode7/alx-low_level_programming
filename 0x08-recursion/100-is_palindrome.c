#include "main.h"

/**
 * is_palindrome - checks for palindrome
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len;

	if (*s == '\0')
	{
		return (1);
	}

	len = _strlen_recursion(s);

	return (checker(s, 0, len - 1));
}


int checker(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (checker(s, start + 1, end - 1));
	}
	
	else
	{
		return (0);
	}
}
