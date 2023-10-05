#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of array
 * @height: heght of array
 *
 * Return: int
*/

int **alloc_grid(int width, int height)
{
	int i, j, k, fr = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (0);

	ptr = malloc(height * sizeof(int *));
	if (ptr == 0)
		return (0);
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = malloc(width * sizeof(int));
		if (*(ptr + i) == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
		{
			free(*(ptr + k));
		}
		free(ptr);
	}
	return (ptr);
}
