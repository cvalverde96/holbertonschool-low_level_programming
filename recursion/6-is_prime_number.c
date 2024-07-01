#include "main.h"

/**
 * _prime - funcion que valida si es prime usando modulos
 * @n: num de main
 * @num: iterator
 * Return: result
 */

int _prime(int n, int num)
{
	if (n % num == 0 && num != n)
	{
		return (0);
	}

	if (num * num > n)
	{
		return (1);
	}

	else
	{
		return (_prime(n, num + 1));
	}
}

/**
 * is_prime_number - funcion prototipo
 * @n: numero de main
 * Return: resultado
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	else
	{
		return (_prime(n, 2));
	}
}
