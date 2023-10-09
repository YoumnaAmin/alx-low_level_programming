#include "main.h"

/**
 * _realloc2 - to reallocate a memo location
 *
 * @ptr0: 1st ptr
 * @ptr1: 2nd ptr
 * @n: unsigned int
 *
 * Return: char
*/

char *_realloc2(char *ptr0, char *ptr1, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		ptr1[i] = ptr0[i];
	return (ptr1);
}

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to modify
 * @old_size: current size of memory
 * @new_size: size memory will now have
 *
 * Return: Pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
			return (0);
		free(ptr);
		return (ptr2);
	}
	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
		return (0);
	_realloc2(ptr, ptr2, old_size);
	free(ptr);
	return (ptr2);
}
