#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: char
 * @n: int number
 *
 * Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *ip;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	for (i = 0; i < n - 1; i++)
	{
		ip = va_arg(args, char *);
		if (ip)
			printf("%s", ip);
		else
			printf("(nil)");
		if (separator)
			printf("%s", separator);
	}
	ip = va_arg(args, char *);
	if (ip)
		printf("%s\n", ip);
	else
		printf("(nil)\n");
	va_end(args);
}
