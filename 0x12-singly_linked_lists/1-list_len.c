#include "lists.h"

/**
 * list_len - Entry point
 * @h: nodes
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);

}
