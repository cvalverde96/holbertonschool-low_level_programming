#include "main.h"
#include <stdlib.h>

/**
 * create_array - creando un array
 * @size: tamano en bytes
 * @c: caracter
 * Return: arr
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	unsigned int i;

	arr = malloc(sizeof(*arr) * size);

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;

	}

	return (arr);


}
