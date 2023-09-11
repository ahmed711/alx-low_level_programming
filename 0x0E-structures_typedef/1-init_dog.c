#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: struct dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: dog's owner
 * Description: 'Initialize a dog'
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
