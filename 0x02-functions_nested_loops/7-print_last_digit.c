#include "main.h"

/**
 * print_last_digit - Entry point
 * @n: print units of n
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int sol;

	sol = n % 10;

	if (sol < 0)
	{
		_putchar(sol * -1 + '0');
		return (sol * -1);
	}
	_putchar(sol + '0');
	return (sol);
}
