#include "main.h"
/**
 * times_table - printea
 * @n: valor de main
 * print_number: imprmiendo numeros
 */


void print_number(int n);

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (product < 10)
				{
					_putchar(' ');
				}
			}
			print_number(product);
		}
		_putchar('\n');
	}
}

/**
 * print_number - prinetano numero
 * @n: main
 */

void print_number(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
