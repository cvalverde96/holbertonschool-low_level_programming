#include <stdio.h>

/**
 * main - accessando los diferentes elementos del array
 * Return: 0 significa exito
 */

int main(void)
{
	int a[5];

	a[0] = 98;
	a[1] = 198;
	a[2] = 298;
	a[3] = 398;
	a[4] = 498;
	printf("Valor de 'a[0]': %d\n", a[0]);
	printf("Valor de 'a[1]': %d\n", a[1]);
	printf("Valor de 'a[2]': %d\n", a[2]);
	printf("Valor de 'a[3]': %d\n", a[3]);
	printf("Valor de 'a[4]': %d\n", a[4]);
	printf("Direccion de 'a[0]': %p\n", &(a[0]));
	printf("Direccion de 'a[1]': %p\n", &(a[1]));
	printf("Direccion de 'a[2]': %p\n", &(a[2]));
	printf("Direccion de 'a[3]': %p\n", &(a[3]));
	printf("Direccion de 'a[4]': %p\n", &(a[4]));
	printf("Valor del array: %p\n", a);
	return (0);

}
