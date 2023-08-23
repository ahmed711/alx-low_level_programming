#include "main.h"
#include <limits.h>

/**
 * sizeofnumber - Entry
 * @n: number
 * Description: get n size
 * Return: size or 10 (success)
 */

int sizeofnumber(unsigned int n)
{
	unsigned int i;

	i = 1;
	while (n >= 10)
	{
		i *= 10;
		n /= 10;
	}
	return (i);
}
/**
 * print_number - Entry point
 * @n: number to print
 * Description: 'print number'
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int size, newnu;

	if (n < 0)
	{
		_putchar('-');
		newnu = n * -1;
	}
	else
	{
		newnu = n;
	}

	size = sizeofnumber(newnu);

	while (size > 0)
	{
		_putchar(newnu / size + '0');
		newnu = newnu % size;
		size /= 10;
	}
}
