#include "lists.h"

/**
 * add_node - Entry point
 * @head: nodes
 * @str: string
 * Description: 'Check if a character is uppercase'
 * Return: Always 0 (Success)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;

	*head = node;

	return (node);

}
