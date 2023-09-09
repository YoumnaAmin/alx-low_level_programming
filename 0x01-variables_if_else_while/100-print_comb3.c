#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry of the program
 *
 * Description: numbers sorting
 *
 * Return: zero
*/

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
		for (j = i + 1; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 56 && j == 57)
				break;
			if (i != 56 || j != 57)
				putchar(44);
			putchar(32);
		}
	return (0);
}
