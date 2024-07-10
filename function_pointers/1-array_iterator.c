#include "function_pointers.h"

/**
 * array_iterator - function that executes a
 * function given as a parameter on each element of an array
 * @array: pointer to int
 * @size: tamano
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}

