#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be converted and printed
 * Return: nothing
*/

void print_binary(unsigned long int n)
{
	int i;
	int shift_flag = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	for (i = sizeof(unsigned long int) * 8 - 1; i >= 0; i--)
	{
		if ((n & (1 << i)) == (1 << i))
		{
			putchar('1');
			shift_flag = 1;
		}
		else if (shift_flag)
		{
			putchar('0');
		}
	}
}
