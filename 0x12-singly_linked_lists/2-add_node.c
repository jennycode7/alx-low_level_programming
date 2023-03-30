#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds node to the start
 * @head: head of list
 * @str: string of characters to be added
 * Return: Return new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *start;
	unsigned int i = 0;

	start = malloc(sizeof(list_t));

	if (start == NULL)
	{
		return (NULL);
	}

	start->str = strdup(str);

	while (str[i] != '\0')
	{
		i++;
	}
	start->len = i;
	start->next = *head;
	*head = start;

	return (*head);
}
