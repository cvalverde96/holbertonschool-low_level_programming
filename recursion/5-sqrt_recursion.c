#include "main.h"

/**
 * _sqrt - esta funcion va ir iterando desde 0 hasta llegar a la
 * multiplicacion de numero que dan el resultado de n
 * si la multiplcacion de ambos numeros iguales va por envima
 * de n pues no existe un square root natural
 * @n: numero de funcion main
 * @num: numero que va ir iterando y multiplicnandose por si mismo
 * Return: resultado
 */

int _sqrt(int n, int num)
{
	if (num * num == n)
	{
		return (num);
	}

	if (num * num > n)
	{
		return (-1);
	}

	return (_sqrt(n, num + 1));
}

/**
 * _sqrt_recursion - esta validando si n es menor a zero
 * para devolver -1, si no pues invoca a sqrt
 * @n: numero de main
 * Return: devolvera resultado de sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(n, 0));
}
