#include "lists.h"

/**
 *list_len - length of list
 *@h: const struct pointer
 *Return: unsigned int
*/

size_t list_len(const list_t *h)
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
