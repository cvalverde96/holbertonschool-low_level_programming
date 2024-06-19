#include "main.h"

/**
 * print_alphabet_x10 - imprimit abecedario 10 veces
 */

void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;
	int c = 0;

	while (c < 10)
	{
		i = 0;
		while (alphabet[i] != '\0')
		{
			_putchar(alphabet[i]);
			i++;
		}
		c++;
	}
}

