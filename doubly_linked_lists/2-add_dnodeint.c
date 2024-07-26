#include "lists.h"

/**
 * add_dnodeint - funcion para anadir nodo al principio
 * @head: pointer to pointer
 * @n: integer
 * Return: retornando pointer
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->prev = NULL;
	new->n = n;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}

	*head = new;

	return (*head);
}

