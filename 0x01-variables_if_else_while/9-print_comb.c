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

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		putchar(44);
		if (i != 57)
			putchar(32);
		else
			break;
	}
	return (0);
}
