#include<stdio.h>

/**
 * main - fabonacci series
 *
 * description: print fabo series
 *
 * Return: 0
*/

int main(void)
{
	int count;
	unsigned long r1 = 0, r2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = r1 + r2;
		printf("%lu", sum);

		r1 = r2;
		r2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
