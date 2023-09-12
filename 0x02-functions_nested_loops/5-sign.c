#include "main.h"

/**
 * print_sign - custom  function
 *
 * @n: Character
 *
 * description: to print either 0 or c
 *
 * Return: c if scucceeded 0 if not
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-')
		return (-1);
	}
}
