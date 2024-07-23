#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: pointer to list_t
 * Return: number of nodes
 */


size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		printf("[%d] ", h->len);
		printf("%s\n", h->str);
		h = h->next;
	}

	return (count);

}
