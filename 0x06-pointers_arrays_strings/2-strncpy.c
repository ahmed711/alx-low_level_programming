#include "main.h"

/**
 * _strncpy - Entry point
 * @dest: pointer to n address
 * @src: src string
 * @n: int
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	for (j = 0; src[j] != '\0'; j++)
	{
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = j > i ? src[i] : '\0';
	}

	return (dest);
}
