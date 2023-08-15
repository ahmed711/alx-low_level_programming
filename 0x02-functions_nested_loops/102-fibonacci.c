#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long last, before_last, fib;

	i = 2;
	before_last = 1;
	last = 2;

	printf("1, 2, ");
	while (i != 50)
	{
		fib = before_last + last;

		if (i != 49)
		{
			printf("%ld, ", fib);
		}
		else
		{
			printf("%ld\n", fib);
		}
		before_last = last;
		last = fib;
		i++;
	}
	return (0);
}
