#include "main.h"
#include <stdio.h>

/**
 * main - si letra es mayuscula return 1,si es
 * minuscula return 0
 * Return: 0 significa extio
 */

int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}

