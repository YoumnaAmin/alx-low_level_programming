#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as a parameter of an array.
 *
 * @array: array
 * @size: unsigned int
 * @action: function pointer
 *
 * Return: nothing void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array)
	{
		if (action)
		{
			for (i = 0; i < size; i++)
			{
				action(array[i]);
			}
		}
	}
}
