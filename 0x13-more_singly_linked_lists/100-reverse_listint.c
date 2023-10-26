#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t linked list.
 * @head: pointer to pointer
 * Return: a struct
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == 0)
		return (*head);
	temp = *head;
	temp2 = temp->next;
	temp->next = NULL;
	while (1)
	{
		if (temp2->next == 0)
		{
			temp2->next = *head;
			*head = temp2;
			break;
		}
		temp = temp2;
		temp2 = temp->next;
		temp->next = *head;
		*head = temp;
	}
	return (*head);
}
