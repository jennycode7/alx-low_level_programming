#include "lists.h"

/**
 * list_len - length of list
 * @h: pointer to struct
 * Return: length
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *current = h;

	for (n = 0; current; n++)
	{
		current = current->next;
	}

	return (n);
}
