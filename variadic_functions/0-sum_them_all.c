#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function summing numbers
 * @n: variable number of const unsigned int
 * Return: sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numeros;
	unsigned int i, sum;

	va_start(numeros, n);

	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(numeros, int);
	}

	va_end(numeros);

	return (sum);

}
