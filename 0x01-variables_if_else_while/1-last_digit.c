#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
int ld;
srand(time(0));
n = rand() - RAND_MAX / 2;
ld = n % 10;
if (ld == 0)
{
	printf("Last digit of %d is 0 and is 0\n", n);
}
if (ld < 5 && ld != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
}
if (ld > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
return (0);
}
