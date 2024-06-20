#include "main.h"

/**
 * _isupper - validar si caracter es mayuscula o minuscua
 * @c: variable de main
 * Return: exit
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
