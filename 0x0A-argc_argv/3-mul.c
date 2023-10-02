#include <stdio.h>
#include <stdlib.h>

/**
 * main - to print the first command
 *
 * @argc: number of command word
 * @argv: string in the command
 *
 * Return: return zero
*/

int main(int argc, char const *argv[])
{
	int mul = 1;
	int i;

	if (argc == 3)
	{
		for (i = 1; i <= 2; i++)
			mul *= atoi(argv[i]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
