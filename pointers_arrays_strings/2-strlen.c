#include "main.h"

/**
 * _strlen - coge una variable y la imprime una por una
 * @s: pointer de string
 * Return: 0 es exito
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
