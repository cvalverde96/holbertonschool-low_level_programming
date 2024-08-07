#include "lists.h"

/**
 * dlistint_len - function que calcula cantidad de nodos
 * @h: pointer to header
 * Return: numero con cantidad de pointers
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
