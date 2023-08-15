#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int main(void)
{
	long last, before_last, fib, sum;

	sum = 2;
	before_last = 1;
	last = 2;
	fib = 0;

	while (fib <= 4000000)
	{
		fib = before_last + last;

		if (fib % 2 == 0)
		{
			sum += fib;
		}
		before_last = last;
		last = fib;
	}
	printf("%ld\n", sum);
	return (0);
}
