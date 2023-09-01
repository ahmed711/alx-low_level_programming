#include "main.h"

/**
 * _abs - Entry point
 * @n: return absolute n
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
