#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 es exito
 */

int main(int argc, char *argv[])
{

	int mult;

	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	mult = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mult);
	return (0);
}

