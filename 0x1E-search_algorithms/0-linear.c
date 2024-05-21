#include "search_algos.h"
/**
 * linear_search - typre of searching
 * @array: pointer
 * @size: size_t type
 * @value: int type value
 * Return: an int type
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i <= size; i++)
	{
		if (array == NULL || i == size)
			return(-1);
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (0);
}
