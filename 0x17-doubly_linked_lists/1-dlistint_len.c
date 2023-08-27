#include "lists.h"

/**
 * dlistint_len - length of list
 * @h: head
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}

	return (x);
}
