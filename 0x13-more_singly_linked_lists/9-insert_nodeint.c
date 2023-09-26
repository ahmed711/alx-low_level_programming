#include "lists.h"

/**
 * insert_nodeint_at_index - Entry point
 * @head: nodes
 * @idx: index
 * @n: int
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	tmp = head && *head ? *head : NULL;
	for (i = 0; i < idx - 1 && tmp != NULL; i++)
	{
		tmp = tmp->next;
	}

	if (tmp)
	{
		node->next = tmp->next;
		tmp->next = node;
		return (node);
	}

	return (NULL);
}
