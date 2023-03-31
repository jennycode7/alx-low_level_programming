#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees list
 * @head: start of list
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
