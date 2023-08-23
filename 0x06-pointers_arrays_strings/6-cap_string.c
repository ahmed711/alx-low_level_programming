#include "main.h"

/**
 * cap_string - Entry point
 * @a: string
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *cap_string(char *a)
{
	int i, j;
	char *sep;

	sep = " \t\n,;.!?\"(){}";

	for (i = 0; a[i] != '\0'; i++)
	{
		if (!i)
		{
			if (a[i] >= 'a' && a[i] <= 'z')
			{
				a[i] -= 32;
			}
		}
		else
		{
			for (j = 0; sep[j] != '\0'; j++)
				if (a[i - 1] == sep[j] && a[i] >= 'a' && a[i] <= 'z')
				{
					a[i] -= 32;
				}
		}
	}
	return (a);
}
