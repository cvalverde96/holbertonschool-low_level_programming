#include "lists.h"

/**
 * add_node - funcion para anadir nodos al beginning
 * @head: pointer to pointer
 * @str: string
 * Return: pointer to node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = str;
	new->next = *head;
	new->len = 1;

	*head = new;

	return (new);
}
