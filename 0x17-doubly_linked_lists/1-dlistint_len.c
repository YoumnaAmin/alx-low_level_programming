#include "lists.h"

/**
 *dlistint_len - length of list
 *@h: const struct pointer
 *Return: unsigned int
*/

size_t dlistint_len(const dlistint_t *h)
{
	const list_t *ptr;
	size_t i;

	ptr = h;
	i = 0;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
