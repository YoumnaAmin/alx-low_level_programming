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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
