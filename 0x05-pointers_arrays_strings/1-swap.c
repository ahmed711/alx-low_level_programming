#include "main.h"

/**
 * swap_int - Entry point
 * @a: pointer to a address
 * @b: pointer to b address
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;

}
