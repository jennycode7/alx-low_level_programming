#include "lists.h"

/**
 * dlistint_len - prints double list
 * @h: head
 * Return: size_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	int x = 0;

	if (!h)
	{
		return (0);
	}
	while (h)
	{
		h = h->next;
		x += 1;
	}
	return (x);
}
