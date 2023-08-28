#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: string s
 * @accept: string accept
 * Description: 'find c in s'
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, l, flag;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	flag = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (s[j] == accept[l])
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			break;
		}
	}

	return (i == j ? (void *)0 : s + j);
}
