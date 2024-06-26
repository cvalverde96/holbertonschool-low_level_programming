#include <stdio.h>

int main()
{
	int n = 98;
	int *p = &n;

	*p++;

	printf("Valor de n: %d\n", n);

	return (0);
}

