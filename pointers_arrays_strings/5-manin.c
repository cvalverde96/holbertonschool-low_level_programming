#include "main.h"
#include <stdio.h>

/**
 * main - de minuscula a mayuscula
 * Return: 0 es exito
 */

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
