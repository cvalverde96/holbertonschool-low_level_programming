#include "function_pointers.h"


/**
 * int_index - comparanto valores
 * @array: pointer to int para array
 * @size: valor
 * @cmp: comparador pointer to function
 * Return: return value
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

		i++;
	}

	return(-1);
}
