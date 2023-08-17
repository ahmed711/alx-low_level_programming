#include "main.h"

/**
 * more_numbers - Entry point
 * Description: 'print numbers from 0 to 9 except 2 and 4'
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
