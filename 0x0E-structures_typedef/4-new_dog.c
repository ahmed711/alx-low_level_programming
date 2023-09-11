#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string
 * Description: 'fill the first n bytes of s with b'
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *s;
	unsigned int i, size;

	if (str == NULL)
	{
		return (NULL);
	}

	for (size = 0; str[size] != '\0'; size++)
	{
	}

	s = malloc((size * sizeof(char)) + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(s + i) = *(str + i);
	}
	s[i] = '\0';
	return (s);
}

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

	new_d->name = _strdup(name);
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}

	new_d->age = age;
	new_d->owner = _strdup(owner);

	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}

	return (new_d);
}
