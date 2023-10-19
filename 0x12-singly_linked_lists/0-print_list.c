#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 *
 * @h: pointer of type const struct
 *
 * Return: nodes count
*/

size_t print_list(const list_t *h)
{
	const list_t *ptr;
	size_t i;

	ptr = h;
	i = 0;
	while (ptr != NULL)
	{
		i++;
		if (ptr->str != NULL)
			printf("[%d] %s\n", ptr->len, ptr->str);
		else
			printf("[0] (nil)\n");
		ptr = ptr->next;
	}
	return (i);
}
