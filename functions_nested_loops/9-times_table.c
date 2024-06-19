#include "main.h"
/**
 * print_number - printea numeros
 * times_table - psrintea numeros
 *
 * @n: variable de main
 * Return: 0
 */

void print_number(int n);

void times_table(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
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
