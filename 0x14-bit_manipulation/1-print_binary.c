#include "main.h"

/**
 * print_binary - Entry point
 * @n: unsinged long int
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

void print_binary(unsigned long int n)
{
	int bits, i, zerosFlag;
	unsigned int bit;

	bits = sizeof(unsigned long int) * 8;
	zerosFlag = 1;
	for (i = bits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (bit == 0 && zerosFlag)
			continue;

		zerosFlag = 0;
		_putchar(bit + '0');
	}
	if (zerosFlag)
		_putchar('0');
}
