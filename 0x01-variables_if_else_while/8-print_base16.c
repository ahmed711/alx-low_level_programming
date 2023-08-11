#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 48;
	while (n < 103)
	{
		if (n <= 57 || n >= 97)
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
