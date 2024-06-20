#include "main.h"
#include <stdio.h>

/**
 * main - validando si caracter es digito o no
 * Return: 0 exito
 */

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
