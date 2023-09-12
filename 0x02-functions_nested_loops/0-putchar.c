#include "main.h"

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
	char str[10] = "_putchar";

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	_putchar(10);
	return (0);
}
