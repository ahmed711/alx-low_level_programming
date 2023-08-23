#include "main.h"

/**
 * string_toupper - Entry point
 * @a: string
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
	return (a);
}
