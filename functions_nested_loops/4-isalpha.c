#include "main.h"

/**
 * _isalpha - va validar si c es un carcarter alphabetico
 * @c: variable que va contener el valor el main.c
 * Return: 0 significa exito
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


