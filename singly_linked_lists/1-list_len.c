#include "lists.h"

/**
 * list_len - function que recibe un pointer que apunta
 * al primer nodo de la lista
 * @h: pointer
 * Return: numero con cantidad de pointers
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
