#include "main.h"
#include <stdio.h>

/**
 * main - devolviendo el nombre del programa,
 * followed by new line
 * @argc: Argument Count
 * @argv: argument vector
 * Return: 0 es exito
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
