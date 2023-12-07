#include "lists.h"

/**
 * get_dnodeint_at_index - to get dnodeint at index
 * @head: points to the head
 * @index: the index number int
 * Return: pointer to node
*/
size_t dlistint_len(const dlistint_t *h);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	if (index > (dlistint_len(head) - 1))
		return (NULL);
	i = 0;
	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}
	return (head);
}
