#include "main.h"

/**
 * print_alphabet - Entry of program
 *
 * @m: character of function
 *
 * description: to print a sentence
 *
 * Return: zero
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	putchar(10);
}
