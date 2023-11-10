#include "lists.h"


/**
  * get_dnodeint_at_index - gets the node at a given index
  * @head: pointer to the head of the list
  * @index: index of the node to get
  * Return: pointer to the node at index, or NULL if it doesn't exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		if (i == index)
		{
			return (temp);
		}
		temp = temp->next;
		i++;
	}

	return (NULL);
}
