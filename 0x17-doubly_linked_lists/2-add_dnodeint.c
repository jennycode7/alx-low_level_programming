#include "lists.h"

/**
 * add_dnodeint - adds node at int
 * @head: head
 * @n: integer
 * Return: returns a dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *stack;


	stack = malloc(sizeof(dlistint_t));
	if (!stack)
	{
		return (NULL)
	}

	stack->n = n;
	stack->prev = NULL;
	stack->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = stack;
	}

	*head = stack;

	return (stack);
}
