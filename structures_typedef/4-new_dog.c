#include <stdlib.h>
#include "dog.h"


char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - funcion para crear un nuevo dogo
 * @name: pointer to char para string de nombre de dogo
 * @age: float para edad de dogo
 * @owner: pointer to char para string de nombre de owner
 * Return: struct nuevo
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *dog_name, *dog_owner;

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	dog_name = malloc(_strlen(name) + 1);

	_strcpy(dog_name, name);

	dog_owner = malloc(_strlen(owner) + 1);

	_strcpy(dog_owner, owner);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);

}

/**
 * _strlen - coge una variable y la imprime una por una
 * @s: pointer de string
 * Return: 0 es exito
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}


/**
 * _strcpy - copiando string
 * @dest: pointer var
 * @src: pointer var
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

