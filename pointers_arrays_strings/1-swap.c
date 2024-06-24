#include "main.h"

/**
 * swap_int - swapeando dos numeros
 * @a: pointer que reccibimos de funcion
 * @b: pointer que recibimos de funcion
 */

void swap_int(int *a, int *b)
{
	int A = *a;
	*a = *b;
	*b = A;
}
