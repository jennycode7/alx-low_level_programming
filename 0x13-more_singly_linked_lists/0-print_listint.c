#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * print_intlist - prints all element
 * @h: pointer to the element
 * Return: return number of element
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
