#include "variadic_functions.h"
/**
 * print_all - prints all its arguments
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *space = ", ", *str;
	int x = 0, i = 0;

	va_start(ap, format);
	while (format[i] && format)
	{
		i++;
	}
	while (format[x])
	{
		if (x >= i - 1)
		{
			space = "";
		}
		switch (format[x])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), space);
				break;
			case 'i':
				printf("%i%s", va_arg(ap, int), space);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), space);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s%s", str, space);
				break;
		}
		x++;
	}
	va_end(ap);
	putchar('\n');
}
