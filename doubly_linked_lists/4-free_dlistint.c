#include "lists.h"

/**
 * free_dlistint - libera lista
 * @head: pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
