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
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
	}

	return (count);

}
