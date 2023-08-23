#include "main.h"

/**
 * _strcat - Entry point
 * @dest: string dest
 * @src: string src
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
