#include "lists.h"

/**
 * sum_dlistint - sum of int of a list
 * @head: head
 * Return: returns sum
 */
int sum_dlistint(dlistint_t *head)
{
	int y = 0;

	while (head)
	{
		y += head->n;
		head = head->next;
	}
	return (y);
}
