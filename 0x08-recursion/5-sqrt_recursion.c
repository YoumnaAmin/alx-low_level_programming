#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: num int
 *
 * Return: int
*/

int square(int n, int y);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - to find r
 *
 * @n: num int
 * @y: root
 *
 * Return: int
*/

int square(int n, int y)
{
	if (y * y == n)
		return (y);
	else if (y * y < n)
		return (square(n + 1));
	else
		return (-1);
}
