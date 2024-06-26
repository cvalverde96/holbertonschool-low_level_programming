#include <stdio.h>

/**
 * modify_my_param - set the integer to 402
 * @m: a pointer the integer we want to set to 402
 *
 * Return: nothing
 */

void modify_my_param(int *m)
{
	printf("Valor de 'm': %p\n", m);
	printf("Direccion de 'm' %p\n", &m);
	*m = 402;
}

/**
 * main - how to change the value of a variable
 * from outside the function
 * Return: 0 significa exito
 */

int main(void)
{
	int n;
	int *p;

	p = &n;
	n = 98;

	printf("Valor de 'n' antes del call: %d\n", n);
	printf("Direccion de 'n': %p\n", &n);
	printf("Valor de 'p': %p\n", p);
	printf("Direccion de 'p': %p\n", &p);
	modify_my_param(p);
	printf("Valor de 'n' luego del call: %d\n", n);
	return (0);

}
