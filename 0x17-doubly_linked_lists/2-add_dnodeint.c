#include "lists.h"
#include <string.h>

/**
 * add_dnodeint - to add node at the begining
 * @head: point to pointer
 * @n: int
 * Return: pointer const structure
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
