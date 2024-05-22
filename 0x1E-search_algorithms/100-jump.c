#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - type of searching
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the first index
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int m, i, j;

	if (array == NULL || size == 0)
		return (-1);

	m = sqrt(size);
	i = 0;
	j = m;

	while (j < size && array[j] < value)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		i = j;
		j += m;
	}

	printf("Value found between indexes [%d] and [%d]\n", i, j);

	for (; i < size && i <= j; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
