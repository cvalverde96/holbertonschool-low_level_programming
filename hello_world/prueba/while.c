#include <stdio.h>

int main(void)
{
	int a = 0;
	int b = 3;

	do {
		printf("%d\n", a);
		a++;
	} while (a < b);

	return (0);
}
