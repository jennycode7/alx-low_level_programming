#include "lists.h"



/**
 * add_dnodeint - adds a node
 * @head: head
 * @n: integer
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new;
		new->next = *head;
	}


	*head = new;

	return (new);
}
