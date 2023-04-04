#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds node to the start
 * @head: ...
 * @n: ...
 * Return: return count
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *start = malloc(sizeof(listint_t));

	if (start == NULL)
	{
		return (NULL);
	}

	start->n = n;
	start->next = *head;

	*head = start;

	return (start);
}
