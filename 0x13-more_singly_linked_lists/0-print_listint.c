#include "lists.h"


/**
 * print_listint - prints list
 * @h: head
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t n = 0;
	const listint_t *node;

	node = h;
	for (n = 0; node; n++)
	{
		printf("%d\n", node->n);
		node = node->next;
	}

	return (n);
}
