#include "lists.h"

/**
 * print_list - prints list
 * @h: head
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t n;
	int x;
	const list_t *current = h;

	for (n = 0; current; n++)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			x = strlen(current->str);
			printf("[%d] %s\n", x, current->str);
		}
		current = current->next;
	}

	return (n);
}
