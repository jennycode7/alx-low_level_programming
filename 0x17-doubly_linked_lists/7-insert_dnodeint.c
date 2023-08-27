#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node
 * @h: head
 * @idx: index
 * @n: integer
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *current;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	if (*h == NULL && idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*h = newNode;
		return (newNode);
	}
	if (idx == 0 && *h != NULL)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}
	current = *h;
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
			return (free(newNode), NULL);
		current = current->next;
	}
	if (!current)
		return (free(newNode), NULL);
	newNode->prev = current;
	newNode->next = current->next;
	if (current->next != NULL)
		current->next->prev = newNode;
	current->next = newNode;
	return (newNode);
}
