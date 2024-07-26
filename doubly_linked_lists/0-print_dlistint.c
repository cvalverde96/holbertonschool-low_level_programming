#include "lists.h"

/**
 * print_dlistint - function para imprimir lista
 * @h: pointer to nodo
 * Return: count of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);

		h = h->next;
	}

	return (count);
}
