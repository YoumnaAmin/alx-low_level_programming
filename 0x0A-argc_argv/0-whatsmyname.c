#include <stdio.h>

/**
 * main - to print the first command
 *
 * @argc: number of command word
 * @argv: string in the command
 *
 * Return: return zero
*/

int main(int argc, char const *argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
