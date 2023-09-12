#include"main.h"

/**
 * print_sign - custom  function
 *
 * @n: Character
 *
 * description: to print either 0 or c
 *
 * Return: 1, 0 and -1 if scucceeded
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
