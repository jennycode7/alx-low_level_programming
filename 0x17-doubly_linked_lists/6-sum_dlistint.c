#include "lists.h"

/**
  * sum_dlistint - sums the values of a doubly linked list
  * @head: pointer to the head of the list
  * Return: the sum of the values of the nodes in the list
  */
int sum_dlistint(dlistint_t *head)
{
	int i = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		i += temp->n;
		temp = temp->next;
	}

	return (i);
}
