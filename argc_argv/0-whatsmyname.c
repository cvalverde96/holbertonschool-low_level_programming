#include "main.h"

/**
 * main - devolviendo el nombre del programa,
 * followed by new line
 * @argc: Argument Count
 * @argv: argument vector
 * Return: 0 es exito
 */

int main(int argc, char *argv[])
{
	int j;

	(void)argc;

	for (j = 0; argv[0][j] != '\0'; j++)
	{
		_putchar(argv[0][j]);
	}
	_putchar('\n');

	return (0);
}
