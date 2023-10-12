#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: char
 * @n: int numb
 *
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char s = *separator;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d%c ", va_arg(args, int), s);
		else if (i == n - 1 || s == 0)
			printf("%d", va_arg(args, int));
	}
	printf("\n");
}
