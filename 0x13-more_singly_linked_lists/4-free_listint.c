#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * free_listint - frees a list
 * @head: ...
 */
void free_listint(listint_t *head)
{
	listint_t *current = head;

	while (current != NULL)
	{
		listint_t *temp = current;

		current = current->next;

		free(temp);
	}
}
