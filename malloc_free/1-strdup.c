#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function que va validar si string esta NULL
 * luego con while statement va calcular LENGHT de str
 * luego le va asignar ese valor en bytes a dupli
 * a traves de malloc + 1 para null terminator
 * for va ir asignando valor de str a dupli
 * @str: string de main
 * Return: dupli
 */

char *_strdup(char *str)
{
	char *dupli;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	dupli = malloc(length + 1);

	if (dupli == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		dupli[i] = str[i];
	}

	return (dupli);
}
