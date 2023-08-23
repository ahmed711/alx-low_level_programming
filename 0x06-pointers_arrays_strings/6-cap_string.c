#include "main.h"
#include <stdbool.h>

/**
 * cap_string - Entry point
 * @a: string
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

char *cap_string(char *a)
{
	int i;
	bool prev_alpha_up, prev_alpha_low, prev_numeric;

	for (i = 0; a[i] != '\0'; i++)
	{
		prev_alpha_up = a[i - 1] >= 'A' && a[i - 1] <= 'Z';
		prev_alpha_low = a[i - 1] >= 'a' && a[i - 1] <= 'z';
		prev_numeric = (a[i - 1] >= '0' && a[i - 1] <= '9');

		if (i != 0 && (prev_alpha_up || prev_alpha_low || prev_numeric))
		{
			continue;
		}
		else if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] -= 32;
		}
	}
	return (a);
}
