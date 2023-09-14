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
	unsigned long r1 = 0, r2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = r1 + r2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;

		r1 = r2;
		r2 = sum;

	}
	printf("%.0f\n", total_sum);

	return (0);
}
