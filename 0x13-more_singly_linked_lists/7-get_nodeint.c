#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: pointer
 * @index: number of index
 * Return: the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
		return (NULL);
	return (head);
}
