#include "main.h"

/**
 * print_square - printea un cuadrado
 * @size: tamano
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar(32);
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}


