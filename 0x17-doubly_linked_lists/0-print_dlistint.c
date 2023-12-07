#include "lists.h"

/**
 * print_dlistint -  prints all the elements of a list_t list.
 *
 * @h: pointer of type const struct
 *
 * Return: nodes count
*/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i;

	ptr = h;
	i = 0;
	while (ptr != NULL)
	{
		i++;
		if (ptr->n != '\0')
			printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (i);
}
