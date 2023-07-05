#include "lists.h"

/**
 * free_list - frees list
 * @head: head
 */
void free_list(list_t *head)
{
	list_t *node, *forward;

	node = head;
	while (node)
	{
		forward = node->next;
		free(node->str);
		free(node);
		node = forward;
	}
}
