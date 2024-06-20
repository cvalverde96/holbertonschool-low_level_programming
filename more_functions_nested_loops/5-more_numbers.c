#include "main.h"

/**
 * more_numbers - printeando del 0 al 14 10 veces.
 */

void more_numbers(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{
		n = 0;
		while (n <= 14)
		{
			if (n > 9)
				_putchar('1');
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}



