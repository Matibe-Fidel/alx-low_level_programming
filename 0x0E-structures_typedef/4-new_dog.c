#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doge;

	doge = malloc(sizeof(dog_t));

	if (doge == NULL)
		return (NULL);

	doge->name = name;
	doge->owner = owner;
	doge->age = age;

	return (doge);
}
