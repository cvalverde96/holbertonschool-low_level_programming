#include <stdio.h>

/**
 * main - imprime direccion de variables
 * Return: 0 significa exito
 */

int main(void)
{
	char c;
	int n;

	printf("Address de variable 'c': %p\n", &c);
	printf("Address de variable 'n': %p\n", &n);
	return (0);
}
