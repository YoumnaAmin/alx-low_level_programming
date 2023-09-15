#include <stdio.h>

/**
 * main - fizzbuzz puzzle
 *
 * description: to print fizz if multiple 3, buzz for 5, fizzbuzz for both
 *
 * Return: 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else
			printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return (0);
}
