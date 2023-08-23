#include "main.h"

/**
 * reverse_array - Entry point
 * @a: string dest
 * @n: string src
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
