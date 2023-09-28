#include "main.h"

/**
 * get_bit - Entry point
 * @n: unsigned int
 * @index: unsigned int
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = n >> index;
	bit = mask & 1;

	return (bit);
}
