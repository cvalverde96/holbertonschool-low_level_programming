#include "main.h"

/**
 * print_alphabet - funcion para imprimir abecedario
 * Return: 0 significa exito
 */

void print_alphabet(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (alphabet[i] != '\0')
	{
		_putchar(alphabet[i]);
		i++;
	}
}

