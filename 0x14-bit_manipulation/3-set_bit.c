#include "main.h"

/**
 * set_bit - Entry point
 * @n: unsigned int
 * @index: unsigned int
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	*n = mask | *n;

	return (1);
}
