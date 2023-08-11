#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int i;

	n = 48;
	while (n < 57)
	{
		i = n + 1;
		while (i < 58)
		{
			putchar(n);
			putchar(i);
			if (n < 56)
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
