#include <stdio.h>

/**
 * main - guardando la direccion de una variable dentro un pointer
 * Return: 0 significa exti
 */

int main(void)
{
	int n = 98;
	int *p = &n;

	printf("Direccion de 'n': %p\n", &n);
	printf("Valor de 'p': %p\n", p);
	return (0);
}
