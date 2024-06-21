#include "main.h"

/**
 * print_triangle - printea un triangulo
 * @size: tamano
 */

void print_triangle(int size)
{
	int a, b, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size; b > a; b--)
			{
				_putchar(' ');
			}

			for (c = 0; c < a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

