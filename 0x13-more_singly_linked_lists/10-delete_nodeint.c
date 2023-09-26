#include "lists.h"

/**
 * delete_nodeint_at_index - Entry point
 * @head: nodes
 * @index: index
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del;
	unsigned int i;

	if (!index && head && *head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	else if (!index)
		return (-1);

	tmp = head && *head ? *head : NULL;
	del = tmp ? tmp->next : NULL;
	for (i = 0; i < index - 1 && tmp && del; i++)
	{
		tmp = tmp->next;
		del = del->next;
	}
	if (!tmp || !del)
	{
		return (-1);
	}
	tmp->next = del->next;
	free(del);

	return (1);
}
