#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Entry point
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Description: 'creates a new dog'
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
	{
		return (NULL);
	}

	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	return (new_d);
}
