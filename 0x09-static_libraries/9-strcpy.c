#include "main.h"

/**
 * _strcpy - Entry point
 * @dest: pointer to n address
 * @src: src string
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
