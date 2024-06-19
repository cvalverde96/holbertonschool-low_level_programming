#include <stdio.h>

/**
 * main - imprmiendo numeros con comas.
 * Return: 0 significa exito.
 */

int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
