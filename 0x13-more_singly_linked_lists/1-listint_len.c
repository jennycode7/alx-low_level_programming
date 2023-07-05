#include "lists.h"

/**
 * listint_len - length of list
 * @h: head
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;
	const listint_t *node;

	node = h;
	for (n = 0; node; n++)
	{
		node = node->next;
	}

	return (n);
}
