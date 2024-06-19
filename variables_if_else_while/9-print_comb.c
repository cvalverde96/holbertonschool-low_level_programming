#include <stdio.h>

/**
 * main - imprmiendo numeros con comas.
 * Return: 0 significa exito.
 */

int main(void)
{
	int i = 0;
	int j;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	return (0);
}
