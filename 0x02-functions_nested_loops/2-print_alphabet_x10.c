#include "main.h"

/**
 * print_alphabet - Entry of program
 *
 * description: to print a sentence
 *
 * Return: zero
*/

void print_alphabet(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
		for (i = 97; i < 123; i++)
			_putchar(i);
	putchar(10);
}
