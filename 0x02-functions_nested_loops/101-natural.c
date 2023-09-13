#include "main.h"
#include<stdio.h>

/**
 * main  - to print the sum of 3,6,9 multiples
 *
 * description: to print sum of 3, 6 and 9 multiples
 *
 * Return: zero
*/

int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("the sum is %d\n", sum);
	return (0);
}
