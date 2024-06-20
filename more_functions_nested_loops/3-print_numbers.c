#include "main.h"

/**
 * print_numbers - printea numeros
 * Return: 0 es exito
 */

void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
