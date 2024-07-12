#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * main - funcion para aceptar argumentos
 * @argc: argument count
 * @argv: argument vector
 * Return: result
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error 98\n");
		return (98);
	}

	else
	{
		result = (get_op_func(argv[2])(num1, num2));
		return (result);
	}

}
