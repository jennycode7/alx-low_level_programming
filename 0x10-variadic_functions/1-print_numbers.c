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
	char *str;

	if (separator == NULL || *separator == 0)
	{
		str = "";
	}

	else
	{
		str = (char *)separator;
	}

	va_start(ap, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			x = va_arg(ap, unsigned int);
			printf("%d%s", x, str);
		}
	}

	va_end(ap);

	putchar('\n');
}
