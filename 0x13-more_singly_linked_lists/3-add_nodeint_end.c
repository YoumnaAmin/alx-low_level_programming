#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to pointer of type struct
 * @n: int number
 *
 * Return: pointer of type struct
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *temp2;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		temp2 = *head;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp;
	}
	return (temp);
}
