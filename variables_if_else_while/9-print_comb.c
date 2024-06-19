#include <stdio.h>

/**
 * main - imprmiendo numeros con comas.
 * Return: 0 significa exito.
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
