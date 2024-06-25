#include "main.h"
#include <stdio.h>

/**
 * main - concatenating two strings
 * Return: 0 es exito
 */

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("");
	printf("");
	ptr = _strncat(s1, s2, 1);
	printf("");
	printf("");
	printf("");
	ptr = _strncat(s1, s2, 1024);
	printf("");
	printf("");
	printf("");
	return (0);

}
