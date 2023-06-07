#include "main.h"


/**
 * _puts_recursion - function prints a string
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
	}
	else
	{
		putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
