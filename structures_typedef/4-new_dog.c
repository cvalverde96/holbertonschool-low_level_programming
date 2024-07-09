#include <stdlib.h>
#include "dog.h"


char *_strcpy(char *dest, char *src);

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

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc(sizeof(name) + 1);

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	_strcpy(my_dog->name, name);

	my_dog->age = age;

	my_dog->owner = malloc(sizeof(owner) + 1);

	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	_strcpy(my_dog->owner, owner);

	return (my_dog);

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

