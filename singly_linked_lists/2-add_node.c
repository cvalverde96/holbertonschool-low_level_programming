#include "lists.h"



int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}


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
	

	new->str = strdup(str);
	new->next = *head;
	new->len = _strlen(str);

	*head = new;

	return (new);
}
