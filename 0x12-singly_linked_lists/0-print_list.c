#include "lists.h"

/**
 * print_list - Entry point
 * @h: nodes
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		h = h->next;
		i++;
	}

	return (i);

}
