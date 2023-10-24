#include "lists.h"

/**
 * pop_listint -  deletes the head node
 *
 * @head: pointer of struct type
 *
 * Return: int
*/

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp0;
	listint_t *temp1;

	temp0 = *head;
	if (head == NULL || temp0 == NULL)
		return (0);
	n = temp0->n;
	temp1 = temp0->next;
	*head = temp1;
	free(temp0);
	return (n);
}
