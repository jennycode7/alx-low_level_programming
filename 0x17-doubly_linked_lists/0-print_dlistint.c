#include "lists.h"

/**
 * print_dlistint - prints a double linked list
 * @h: head
 * Return: returns the length of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		x++;
	}

	return (x);
}
