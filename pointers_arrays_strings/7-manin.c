#include "main.h"
#include <stdio.h>

/**
 * main - encoding
 * Return: 0 es exito
 */

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
