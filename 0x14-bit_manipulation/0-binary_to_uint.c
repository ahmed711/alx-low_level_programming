#include "main.h"

/**
 * binary_to_uint - Entry point
 * @b: binary number
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res, i;

	if (!b)
		return (0);

	res = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		res <<= 1;
		if (b[i] == '1')
			res |= 1;
		else if (b[i] != '0')
			return (0);
	}

	return (res);
}
