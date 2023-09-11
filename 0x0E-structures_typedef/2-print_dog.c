#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Entry point
 * @d: struct dog
 * Description: 'print dog info'
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
