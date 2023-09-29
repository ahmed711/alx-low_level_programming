#include "main.h"

/**
 * get_endianness - Entry point
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

int get_endianness(void)
{
	unsigned int i;
	char *ptr;

	i = 1;
	ptr = (char *) &i;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
