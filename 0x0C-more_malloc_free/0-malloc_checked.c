#include "main.h"
/**
 * malloc_checked -  allocates memory using malloc
 *
 * @b: unsigned int
 *
 * Return: void ponter
*/

void *malloc_checked(unsigned int b)
{
	int *ptr = (void *)malloc(b);

	if (ptr != NULL)
		return ((void *)ptr);
	else
		return ((void *)98);
}
