#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
