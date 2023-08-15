#include "main.h"

/**
 * main - Entry point
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char word[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (i = 0; i < (int) sizeof(word); i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
