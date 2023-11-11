#include "lists.h"


/**
 * insert_dnodeint_at_index - inserts node
 * @h: head
 * @n: number
 * @idx: index
 * Return: dlistint
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int x = 0;
	dlistint_t *new_node, *temp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	while (temp)
	{
		if (x == idx)
		{
			(temp->prev)->next = new_node;
			new_node->prev = temp->prev;
			temp->prev = new_node;
			new_node->next = temp;
			return (new_node);
		}
		temp = temp->next;
		x++;
	}

	return (NULL);
}
