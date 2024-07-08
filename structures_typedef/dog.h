#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - estamos creando una estructura dogo
 * @name: pointer to char para string de nombre de dogo
 * @age: float para age
 * @owner: pointer to char para string de nombre de owner de dogo
 */
struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
