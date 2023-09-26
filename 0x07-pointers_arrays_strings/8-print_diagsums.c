#include "main.h"

/**
 * print_diagsums - sum of diagonals of a square matrix.
 *
 * @a: array
 * @size: size of the array
 *
 * Return: nothing
*/

void print_diagsums(int *a, int size)
{
	int i;
	int s = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s);
	printf("%d\n, ", s2);
}
