#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of list_t list
 * @h: Singly linked list to be printed
 * Return: ...
 */
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 1;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}
	if (h->next != NULL)
		count += print_list(h->next);
	return (count);
}
