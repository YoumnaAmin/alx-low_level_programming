#include "lists.h"
#include <stddef.h>

/**
 * free_dlistint - frees memory of a list
 * @head: pointer to head of singly linked list
 *
 * Return: No Return
 */
void free_dlistint(dlistint_t *head)
{
	if (head == 0)
		return;
	free_dlistint(head->next);
	free(head);
}
