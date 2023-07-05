#include "lists.h"


/**
 * add_node_end - adds node to the end
 * @head: head
 * @str: string
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first_node;
	list_t *last_node;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
	{
		return (NULL);
	}

	last_node->str = strdup(str);
	last_node->next = NULL;

	if (*head == NULL)
	{
		*head = last_node;
	}

	else
	{
		first_node = *head;
		while (first_node->next)
		{
			first_node = first_node->next;
		}

		first_node->next = last_node;
	}

	return (*head);
}
