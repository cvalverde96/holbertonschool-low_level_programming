#include <stdio.h>
void f(int *a);

/**
 * main - ilustrando el array type decay
 * Return: 0 signficia exito
 */

int main(void)
{
	int *p;
	int t[10];

	p = t;
	printf("t: %p\n", t);
	printf("&t[0]: %p\n", &t[0]);
	printf("p: %p\n", p);
	f(t);
	return (0);
}

/**
 * f - printea el valor de pointer of type int
 * @a: direccion de integer que necesitamos printear
 * Return: nada
 */

void f(int *a)
{
	printf("a: %p\n", a);
	return;
}
