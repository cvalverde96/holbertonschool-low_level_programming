#include <stdlib.h>
#include "dog.h"

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

	else
	{
		my_dog->name = name;
		my_dog->age = age;
		my_dog->owner = owner;
	}

	return (my_dog);

}
