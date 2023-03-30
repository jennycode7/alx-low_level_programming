#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t n;

	if (h == NULL)
	{
		return (0);
	}

	n = 1;

	if (h->next != NULL)
	{
		n += list_len(h->next);
	}
	return (n);
}
