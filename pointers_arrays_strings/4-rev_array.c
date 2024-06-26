#include "main.h"

/**
 * reverse_array - reversando el array
 * @a: pointer
 * @n: int
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	while (a[n] != '\0')
	{
		n++;
	}

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}

}
