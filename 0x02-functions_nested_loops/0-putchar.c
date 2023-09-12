#include<stdio.h>

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

	for (i = 0; i < 10; i++)
		putchar(str[i]);
	putchar(10);
	return (0);
}
