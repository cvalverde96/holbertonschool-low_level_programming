#include "main.h"

/**
 * main - llama la funcion de putchar_program
 * putchar_program - imprime _putchar
 * Return: 0 significa exito
 *
 */

int main(void)
{
	char *str = "_putchar\n";

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
