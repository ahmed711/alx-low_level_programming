#include "main.h"

/**
 * _islower - Entry point
 * @c: character to check if lower alphabet or not
 * Description: 'Print a sentance to screen'
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if ((int) c >= 97 && (int) c <= 122)
	{
		return (1);
	}
	return (0);
}
