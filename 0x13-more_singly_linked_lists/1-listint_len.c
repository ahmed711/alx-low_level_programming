#include "lists.h"

/**
 * listint_len - Entry point
 * @h: nodes
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);

}
