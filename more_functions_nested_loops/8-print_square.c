/*#include "main.h"*/

/**
 * print_square -imprime un cuadrado
 * @size: tamano de cuadrado
 */

/*void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else

	for (i = 1; i <= size; i++)
	{
		_putchar(35);
	}

	_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		_putchar(35);
	}

	_putchar('\n');
}*/

#include "main.h"

/**
 * print_square - imprime un cuadrado
 * @size: tamano de cuadrado
 */

void print_square(int size)
{
    int i, j;

    if (size <= 0)
    {
        _putchar('\n');
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

