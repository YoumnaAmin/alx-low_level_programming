#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters.
 *
 * @n: paramater
 *
 * Return: int
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int s = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		s += va_arg(args, int);
	}
	va_end(args);
	return (s);
}
