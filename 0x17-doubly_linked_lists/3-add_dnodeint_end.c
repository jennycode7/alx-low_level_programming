#include "lists.h"


/**
  * add_dnodeint_end - adds node at end
  * @head: pointer to head of list
  * @n: data to be added
  * Return: address of new element, or NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;
  
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
   
	while (temp->next)
	{
		temp = temp->next;
	}
    
	temp->next = new_node;
	new_node->prev = temp;
  
	return (new_node);
}
