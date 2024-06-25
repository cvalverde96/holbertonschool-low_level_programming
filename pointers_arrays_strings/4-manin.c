#include "main.h"
#include <stdio.h>

/**
 * print_array - printiando array
 * @a: pointer
 * @n: variable
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[1]);
		i++;
	}
	printf("\n");
}

/**
 * main - reverse order
 * Return: 0 es exito
 */

int main(void)
{
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
	reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
}
