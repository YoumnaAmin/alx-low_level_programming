#include "main.h"

/**
 * print_array -  prints n elements of an array of integers
 *
 * @a: array
 * @n: int
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
		}
		else if(i < n && i != n-1)
		{
			printf("%d, ", a[i]);
		}
		else
		printf("\n");
	}
	printf("\n");
}
