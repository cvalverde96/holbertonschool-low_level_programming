#include "lists.h"

/**
 * _strlen - function para calcular el length
 * @s: constant char
 * Return: el lengh
 */

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
 * add_node_end - funcion para anadir nodo al final
 * @head: pointer to pointer
 * @str: string a anadir
 * Return: pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *temp = *head;

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}

	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
