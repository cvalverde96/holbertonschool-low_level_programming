#include <stdio.h>

/**
 * main - deferencing pointers
 * Return: 0 significa exito
 */

int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Valor de 'n': %d\n", n);
	printf("Direccion de 'n': %p\n", &n);
	printf("Valor de 'p': %p\n", p);
	*p = 402;
	printf("Valor de 'n': %d\n", n);
	printf("direccion de 'n': %p\n", &n);
	return (0);
}
