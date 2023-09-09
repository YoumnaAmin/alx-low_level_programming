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
	int i, j, k;

	for (i = 48; i < 57; i++)
		for (j = i + 1; j < 58; j++)
			for (k = j + 1; k < 58; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					break;
				if (i != 55 || j != 56 || k != 57)
					putchar(44);
				putchar(32);
			}
	putchar(10);
	return (0);
}
