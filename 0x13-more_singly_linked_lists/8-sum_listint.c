#include "lists.h"

/**
 * sum_listint- returns the sum of all the data (n) of a listint_t linked list.
 * @head: pointer of type struct
 * Return: int
*/
int sum_listint(listint_t *head)
{
	int s;

	if (head == NULL)
		return (NULL);
	s = 0;
	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}
	return (s);
}
