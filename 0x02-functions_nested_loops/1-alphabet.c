#include<stdio.h>

/**
 * print_alphabet - Entry of program
 *
 * @m: character of function
 *
 * description: to print a sentence
 *
 * Return: zero
*/

void print_alphabet(int m)
{
	int i;

	for (i = m; i < 123; i++)
		putchar(i);
}

/**
 * main - Entry of program
 *
 * description: to print a sentence
 *
 * Return: zero
*/

int main(void)
{
	int i;

	i = 97;
	print_alphabet(i);
	putchar(10);
	return (0);
}
