#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: ...
 * @n: ...
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	if (separator == NULL || *separator == 0)
	{
		separator = "";
	}

	va_start(ap, n);

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ap, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(ap);

	putchar('\n');
}
