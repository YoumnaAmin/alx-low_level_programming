#include "main.h"

/**
 * reverse_array - rev an array
 *
 * @a: points to array
 * @n: size of array
 *
 * Return: zero
*/

void reverse_array(int *a, int n)
{
	int i, j, k;

	j = n - 1;
	for (i = 0; i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}
