#include "lists.h"

/**
 * sum_dlistint - Retorna suma
 * @head: pointer
 *
 * Return: retorna suma
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

