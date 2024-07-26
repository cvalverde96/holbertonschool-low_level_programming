#include "lists.h"

/**
 * free_list - funcion para liberar
 * @head: pointer to nodo
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
