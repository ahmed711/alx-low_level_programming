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
	int k;

	n = 48;
	while (n < 56)
	{
		i = n + 1;
		while (i < 57)
		{
			k = i + 1;
			while (k < 58)
			{
				putchar(n);
				putchar(i);
				putchar(k);
				if (n < 55)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			i++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
