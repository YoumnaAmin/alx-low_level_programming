#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked
 *
 * @h: pointer of type struct
 *
 * Return: unsignd int
*/

size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
