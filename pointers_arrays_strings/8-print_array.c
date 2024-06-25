#include "main.h"
#include <stdio.h>

/**
 * print_array - printing array
 * @a: direccion de array first element
 * @n: cantidad de arrays
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
