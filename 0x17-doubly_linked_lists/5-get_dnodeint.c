#include "lists.h"


/**
 * get_dnodeint_at_index - get node at index
 * @head: head
 * @index: index
 * Return: dlistint_t
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int x = 0;

	while (head)
	{
		if (x == index)
		{
			temp = head;
			return (temp);
		}
		head = head->next;
		x++;
	}
	return (NULL);
}
