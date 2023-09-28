#include "main.h"

/**
 * flip_bits - Entry point
 * @n: unsigned int
 * @m: unsigned int
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flips;
	unsigned int i;

	i = 0;
	flips = n ^ m;

	while (flips)
	{
		i += flips & 1;
		flips >>= 1;
	}

	return (i);
}
