#include <stdio.h>

/**
 * main - imprimiendo numeros usando putchar
 * Return: 0 significa exito
 */

int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
