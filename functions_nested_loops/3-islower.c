#include "main.h"

/**
 * _islower - va validar si variable c es mayor
 * o igual a, y si c es igual o menor a zeta
 * mientras tanto esto sea cierto programa correra
 * @c: will take in the value provided in main sino devolvera 0
 * Return: 0 significa completado
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
