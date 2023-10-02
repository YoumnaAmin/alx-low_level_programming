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
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
