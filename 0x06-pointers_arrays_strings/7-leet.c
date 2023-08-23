#include "main.h"
#include <stdbool.h>

/**
 * leet - Entry point
 * @a: string
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *leet(char *a)
{
	int i;
	bool is_a, is_e, is_o, is_t, is_l;
	char *s;

	s = "43107...43107";

	for (i = 0; a[i] != '\0'; i++)
	{
		is_a = a[i] == 'a' || a[i] == 'A';
		is_e = a[i] == 'e' || a[i] == 'E';
		is_o = a[i] == 'o' || a[i] == 'O';
		is_t = a[i] == 't' || a[i] == 'T';
		is_l = a[i] == 'l' || a[i] == 'L';

		if (is_a || is_e || is_o || is_t || is_l)
		{
			a[i] = s[(int) (a[i] - 65) / 4];
		}
	}
	return (a);
}
