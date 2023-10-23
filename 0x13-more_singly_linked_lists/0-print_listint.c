#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: ointer of stryct type
 *
 * Return: unsigned int
 */

size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
