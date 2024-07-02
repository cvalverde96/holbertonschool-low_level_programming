#include "main.h"
#include <stdio.h>

/**
 * main - imprimiendo cantidad de argumentos
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 es eexito
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
