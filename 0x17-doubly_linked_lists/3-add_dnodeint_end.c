#include "lists.h"

/**
 * add_dnodeint_end - adds node at end
 * @head: head
 * @n: integer
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *current;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	current->next = newNode;
	newNode->prev = current;

	return (newNode);
}
