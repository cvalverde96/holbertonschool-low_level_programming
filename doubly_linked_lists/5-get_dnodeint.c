#include "lists.h"

/**
 * get_dnodeint_at_index - retorna nodo
 * @head: pointer a poiinter
 * @index: index
 *
 * Return:retorna nodo
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;

	while (head != NULL)
	{
		if (current_index == index)
		{
			return (head);
		}
		head = head->next;
		current_index++;
	}

	return (NULL);
}

