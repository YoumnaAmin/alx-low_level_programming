#include "lists.h"

/**
 * sum_dlistint - summation of n int
 * @head: points to nodes
 *  Return: int
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;
	size_t i;

	if (!head)
		return (0);
	i = 0;
	sum = 0;
	while (head != NULL)
	{
		i++;
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
