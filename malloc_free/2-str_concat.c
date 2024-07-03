#include "main.h"
#include <stdlib.h>

/**
 * str_concat - funcion que va validar si s1 o s2 tiene null
 * de alguno tener null va devolver null
 * luego tenemos que calcular la distancia de
 * s1 y s2 a traves de while statements
 * esa cantidad de bytes lo vamos a asignar en memoria usando
 * malloc.sumando los bytes con variable len_cat
 * @s1: primer string
 * @s2: segundo string
 * Return: devolvemos pointer to char con_gato que contiene
 * string concataneted
 */

char *str_concat(char *s1, char *s2)
{
	char *con_gato;
	int len_s1 = 0;
	int len_s2 = 0;
	int len_cat;
	int i, j;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}

	len_cat = len_s1 + len_s2;

	con_gato = malloc(len_cat + 1);

	if (con_gato == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len_s1; i++)
	{
		con_gato[i] = s1[i];
	}

	for (j = 0; j < len_s2; j++)
	{
		con_gato[i + j] = s2[j];
	}

	return (con_gato);

}
