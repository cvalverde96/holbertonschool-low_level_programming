#include <stdio.h>

/**
 * main - printea el tamaño de char, int, float
 * Return: 0 significa extio
 */

int main(void)
{
	int n;

	printf("Tamaño de 'char' es: %lu bytes\n", sizeof(char));
	printf("Tamaño de 'int' es: %lu bytes\n", sizeof(int));
	printf("Tamaño de 'float' es: %lu bytes\n", sizeof(float));
	return (0);
}
