#include "main.h"

/**
 * rot13 - Entry point
 * @a: string
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *rot13(char *a)
{
	int i;
	char *s;

	s = "NOPQRSTUVWXYZABCDEFGHIJKLM......nopqrstuvwxyzabcdefghikklm";

	for (i = 0; a[i] != '\0'; i++)
	{
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
		{
			a[i] = s[(int) a[i] - 65];
		}
	}
	return (a);
}
