#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements
 * @h: pointer to the elements
 * Return: return number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
