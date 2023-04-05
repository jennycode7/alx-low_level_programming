#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: ...
 */
void free_listint2(listint_t **head)
{
	listint_t *killnode;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while (current != NULL)
		{
			killnode = current;
			current = current->next;
			free(killnode);
		}
		*head = NULL;
	}
}
