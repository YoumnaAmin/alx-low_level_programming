#include "search_algos.h"
/**
 * jump_search - typre of searching
 * @array: pointer
 * @size: size_t type
 * @value: int type value
 * Return: an int type
*/
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	prev = 0;

	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		(unsigned long)prev, array[prev]);
		prev += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	(unsigned long)(prev - step), (unsigned long)prev);

	for (i = prev - step; i < size && i < prev; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
