#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - asignando memoria usando malloc
 * @b: cantidad de bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(*ptr) * b);

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (ptr);
}
