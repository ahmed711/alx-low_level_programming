#include "lists.h"

/**
 * add_nodeint - Entry point
 * @head: nodes
 * @n: int
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	if (head == NULL)
	{
		*head = node;
		return (node);
	}

	node->next = *head;
	*head = node;

	return (node);

}
