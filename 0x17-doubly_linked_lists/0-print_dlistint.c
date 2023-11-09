#include "lists.h"

/**
 * print_dlistint - prints double list
 * @h: head
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	int x = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x += 1;
	}
	return (x);
}
