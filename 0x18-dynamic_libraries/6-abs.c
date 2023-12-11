#include "main.h"

/**
 * _abs - asolute for a number
 *
 * @n: character to calculate the abs
 *
 * description: computes the absolute value of an integer
 *
 * Return: zero
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
