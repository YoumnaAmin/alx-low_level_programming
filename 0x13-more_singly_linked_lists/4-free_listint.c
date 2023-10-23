#include "lists.h"
#include <stddef.h>

/**
 * free_listint -  frees a listint_t list.
 *
 * @head: pointer struct
 *
 * Return: Nothing
*/

void free_listint(listint_t *head)
{
	if (head == 0)
		return;
	free_listint(head->next);
	free(head);
}
