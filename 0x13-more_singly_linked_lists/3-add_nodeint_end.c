#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: ...
 * @n: ...
 * Return: returns address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current_node;

	current_node = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	while (current_node != NULL && current_node->next != NULL)
	{
		current_node = current_node->next;
	}

	if (current_node != NULL)
	{
		current_node->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
