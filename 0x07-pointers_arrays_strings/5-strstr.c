#include "main.h"
#include <stddef.h>

/**
 * _strstr - Entry point
 * @haystack: string s
 * @needle: string accept
 * Description: 'find c in s'
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k, l, count;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	}

	for (j = 0; needle[j] != '\0'; j++)
	{
	}

	for (k = 0; k < i - j + 1; k++)
	{
		count = 0;
		for (l = 0; needle[l] != '\0'; l++)
		{
			if (haystack[k + l] == needle[l])
			{
				count++;
				if (count == j)
				{
					return (haystack + k);
				}
			}
			else
			{
				break;
			}
		}
	}

	return (NULL);
}
