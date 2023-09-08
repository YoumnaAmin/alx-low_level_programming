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
	int i;

	for (i = 97 ; i < 123 ; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	printf("\n");
	return (0);
}
