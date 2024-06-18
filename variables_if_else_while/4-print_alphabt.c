#include <stdio.h>

/**
 * main - esto va imprimir un abecedaroi menos q y e
 * Return: 0 sifnifica exito.
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}
