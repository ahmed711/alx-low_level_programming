#include "main.h"
#include <stdio.h>

/**
 * _strspn - Entry point
 * @s: string s
 * @accept: accepted str
 * Description: 'find c in s'
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, flag;

	k = 0;
	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				flag = 1;
				k++;
				break;
			}
		}
		if (!flag)
		{
			return (k);
		}
		flag = 0;
	}

	return (k);
}
