#include "main.h"

/**
 * rev_string - Entry point
 * @s: pointer to n address
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i, j;
	char x;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (j = 0; j < i / 2; j++)
	{
		x = s[j];
		s[j] = s[i - 1 - j];
		s[i - 1 - j] = x;
	}
}
