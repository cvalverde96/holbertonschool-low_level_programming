#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator: string
 * @n: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list numeros;

	va_start(numeros, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(numeros, int);
		printf("%d", x);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(numeros);

}
