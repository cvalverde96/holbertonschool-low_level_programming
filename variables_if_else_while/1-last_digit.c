#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - va a printear la oracion the last digit of seguido por el
 * numero es y pone el ultimo numero
 * luego compara si n es mayor a 5
 * si n es 0
 * y si n es menor a 6 y no 0 para imprmir un mensaje
 * Return: 0 significa exito.
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
