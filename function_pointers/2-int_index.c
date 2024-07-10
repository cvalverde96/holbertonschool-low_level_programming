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
	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		return (cmp(array[size]));
	}

}
