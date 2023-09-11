#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @d: dog
 * Description: 'frees a dog'
 * Return: Always 0 (Success)
 */

void free_dog(dog_t *d)
{
	free(d);
}
