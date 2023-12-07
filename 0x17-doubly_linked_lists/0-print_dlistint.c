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
	size_t i;

	i = 0;
	while (h != NULL)
	{
		i++;
		if (h->n != '\0')
			printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
