#include "main.h"
#include <stdio.h>

/**
 * main - chequea el leng de un string
 * Return: 0 significa exito
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}

