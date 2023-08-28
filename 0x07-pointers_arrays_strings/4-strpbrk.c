#include "main.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * isalpha - Entry point
 * @b: char to check
 * Description: check if b is alpha
 * Return: 0 or 1
 */

int _isalpha(char b)
{
	bool upper, lower;

	upper = (b >= 'A' && b <= 'Z');
	lower = (b >= 'a' && b <= 'z');

	return ((int) upper || lower);
}

/**
 * _strlen - Entrypoint
 * @s: string
 * Decription: return string length
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 * firstoccur - Entry point
 * @s: string s
 * @accept: string accept
 * Description: 'find c in s'
 * Return: Always 0 (Success)
 */

int firstoccur(char *s, char *accept)
{
	int i, j, flag;

	flag = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
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
	return (i);
}
/**
 * _strpbrk - Entry point
 * @s: string s
 * @accept: string accept
 * Description: 'find c in s'
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k, l, flag;
	char *p;

	flag = 0;
	l = _strlen(s);
	i = firstoccur(s, accept);

	if (l == i && s[i] == '\0')
	{
		return (NULL);
	}

	j = l;
	p = (char *)malloc(j - i + 1);
	flag = 0;

	for (k = 0; k < j - i; k++)
	{
		if (!_isalpha(s[k + i]))
		{
			p[k] = s[k + i];
			continue;
		}
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (s[k + i] == accept[l])
			{
				flag = 1;
				p[k] = s[k + i];
				break;
			}
		}
		if (!flag)
		{
			break;
		}
	}
	p[k] = '\0';
	return (p);
}
