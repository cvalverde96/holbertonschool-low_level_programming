#include "main.h"


/**
 * _memset - fills the memory with a constant byte
 * @s: pointer
 * @b: valor que estamos llenando
 * @n: cantidad de bytes
 * Return: s es el valor nuevo
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}


	return (s);
}
