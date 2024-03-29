#include "lists.h"

/**
  * free_dlistint - frees a doubly linked list
  * @head: pointer to the head of the list
  * Return: void
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
