#include "main.h"

/**
 * main - llama la funcion de putchar_program
 * putchar_program - imprime _putchar
 * Return: 0 significa exito
 *
 */

int main(void)
{
	char str[] = "_putchar\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
