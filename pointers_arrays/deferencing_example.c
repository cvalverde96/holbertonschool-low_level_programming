#include <stdio.h>

/**
 * main - deferencing pointers, con int y char
 * Return: 0 significa exito
 */

int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;

	printf("Valor de 'c': %d ('%c')\n", c, c);
	printf("Direccion de 'c': %p\n", &c);
	printf("Valor de 'pp': %p\n", pp);
	printf("Valor de 'n': %d\n", n);
	printf("Direccion de 'n': %p\n", &n);
	printf("Valor de 'p': %p\n", p);
	*p = 402;
	*pp = 'o';
	printf("Valor de 'n': %d\n", n);
	printf("Valor de '*pp': %d\n", *pp);
	printf("Valor de 'c': %d ('%c')\n", c, c);
	printf("Valor de '*pp': %d ('%c')\n", *pp, *pp);
	return (0);

}
