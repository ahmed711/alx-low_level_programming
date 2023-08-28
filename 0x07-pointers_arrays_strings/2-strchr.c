#include "main.h"

/**
 * _strchr - Entry point
 * @s: string s
 * @c: char c
 * Description: 'find c in s'
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
		{
			break;
		}
	}
	return (i == j && c != '\0' ? (void *)0 : s + j);
}
