#include <stdio.h>

/**
 * main - printe el tamaño en bytes de un pointer
 * Return: 0 significa exito
 */

int main(void)
{
	char *p;

	printf("El tamaño del pointer: %lu\n", sizeof(p));
	return (0);
}
