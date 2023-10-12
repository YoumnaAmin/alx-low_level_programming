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

	if (n == 0)
	{
		printf("/n");
		return;
	}
	if (separator == 0)
	separator = "";
	va_start(args, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(args, int), separator);
	printf("%d\n", va_arg(args, int));
	va_end(args);
}
