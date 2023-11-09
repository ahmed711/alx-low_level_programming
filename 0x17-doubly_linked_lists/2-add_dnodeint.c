#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head: double linked list array
 * @n: int
 * Return: Always EXIT_SUCCESS.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	tmp->prev = new_node;
	*head = new_node;
	new_node->next = tmp;

	return (new_node);
}
