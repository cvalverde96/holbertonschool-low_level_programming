#include <stdio.h>

/**
 * modif_my_char_var - modificando los valores de pointer cc
 * y de caracter ccc
 * Return: nada
 */

void modify_my_char_var(char *cc, char ccc)
{
	printf("Valor de 'cc': %p\n", cc);
	printf("Direccion de 'cc': %p\n", &cc);
	printf("Valor de 'ccc': %d ('%c')\n", ccc, ccc);
	printf("Direccion de 'ccc': %p\n,", &ccc);
	*cc = 'o';
	ccc = '1';


}

/**
 * main - cambiando valores de variables de afuera de la funccion
 * Return: 0 es exito
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';

	printf("Valor de 'c' antes del call: %d ('%c')\n", c, c);
	printf("Direccion de 'c': %p\n", &c);
	printf("Valor de 'p': %p\n", p);
	printf("Direccion de 'p': %p\n", &p);
	modify_my_char_var(p, c);
	printf("Valor de 'c' luego del call: %d ('%c')\n", c, c);
	printf("valor de");
	return (0);
}
