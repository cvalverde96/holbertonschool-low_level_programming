#include "main.h"

/**
 * print_sign - will validate if variable is less than, equal or
 * grater than 0
 * @n: variable returned
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
