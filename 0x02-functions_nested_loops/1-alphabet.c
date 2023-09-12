#include<stdio.h>

/**
 * print_alphabet - Entry of program
 *
 * description: to print a sentence
 *
 * Return: zero
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
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
	print_alphabet();
	putchar(10);
	return (0);
}
