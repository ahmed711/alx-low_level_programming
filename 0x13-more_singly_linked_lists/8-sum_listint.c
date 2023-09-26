#include "lists.h"

/**
 * sum_listint - Entry point
 * @head: nodes
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	sum = 0, tmp = head;
	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
