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
	_puts_recursion(s++);
}
