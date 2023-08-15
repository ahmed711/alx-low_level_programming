#include "main.h"

/**
 * print_to_98 - Entry point
 * @n: int
 * Description: 'Add 2 ints'
 * Return: Sum of 2 ints (Success)
 */

void print_to_98(int n)
{
	int k;

	while (n != 98)
	{
		k = n;
		if (n < 0)
		{
			_putchar('-');
			k = n * -1;
		}
		if (k < 10)
		{
			_putchar(k + '0');
		}
		else if (k < 100)
		{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		else
		{
			_putchar(k / 100 + '0');
			_putchar((k / 10) % 10  + '0');
			_putchar(k % 10 + '0');
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
			n = n < 98 ? n + 1 : n - 1;
		}

	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
