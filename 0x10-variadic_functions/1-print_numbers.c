#include "variadic_functions.h"


/**
 * print_numbers - prints numbers
 * @separator: ...
 * @n: ...
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x = 0, i = 0;
	va_list ap;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ap, unsigned int);
		printf("%d%s", x, separator);
	}

	va_end(ap);

	putchat('\n');
}
