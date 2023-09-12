#include "main.h"

/**
 * print_last_digit - last digit
 *
 * @n: character
 *
 * description: prints the last digit of a number
 *
 * Return: last digit
*/

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
		lastDigit = (-1) * (n % 10);
	else
		lastDigit = n % 10;
	_putchar(lastDigit);
	return (n);
}
