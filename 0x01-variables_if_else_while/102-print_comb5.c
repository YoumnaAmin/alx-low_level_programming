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
	int i, j, k, l;

	for (i = 48; i < 58; i++)
		for (j = 48; j < 58; j++)
			for (k = 48; k < 58; k++)
				for (l = 48; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i == 57 && j == 57 && k == 57 && l == 57)
					{
						break;
					}
					if (i != 57 || j != 57 || k != 57 || l != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
	putchar(10);
	return (0);
}
