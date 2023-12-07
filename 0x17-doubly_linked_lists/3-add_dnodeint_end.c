#include "lists.h"
#include <string.h>

/**
 * add_dnodeint_end - to add node at the begining
 * @head: point to pointer
 * @n: int
 * Return: pointer const structure
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	new_node->prev = current;
	new_node->next = NULL;
	current->next = new_node;
	return (new_node);
}
