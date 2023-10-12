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

	va_start(args, n);
	if (n == 0)
	{
		printf("/n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d%s", va_arg(args, int), *separator);
		else if (i == n - 1)
			printf("%d", va_arg(args, int));
		else if (separator == 0)
		{
			separator = "";
			printf("%d%s", va_arg(args, int), *separator);
		}
	}
	printf("\n");
	va_end(args);
}
