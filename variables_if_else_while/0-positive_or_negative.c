#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - validando si numero random es numero positivo
 *  negativo o zero.
 *  Return: devuelve 0 si fue exitoso
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
