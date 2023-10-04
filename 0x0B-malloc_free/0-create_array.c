#include "main.h"

/**
 * create_array - array of chars, and initializes it with a specific char.
 *
 * @size : size of array
 * @c: char
 *
 * Return: a char
*/

char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);
	unsigned int i;

	if (size == 0 || ptr == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
		return (ptr);
	}
}
