#include "main.h"

/**
 * times_table - Entry point
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * j > 9)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				_putchar(i * j + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (i * (j + 1) < 10)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
