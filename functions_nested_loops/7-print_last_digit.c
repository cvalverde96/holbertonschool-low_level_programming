#include "main.h"

/**
 * print_last_digit - imprime ultimo digito
 * @n: variable de main
 * Return: 0
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (0);
}

