#include <stdio.h>

/**
 * main - estamos haciendo un for loop para que char ch
 * empieze con el valor de a y siga incrementando hasta
 * llegar a la zeta.
 * Return: 0 sifnifica exito.
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
