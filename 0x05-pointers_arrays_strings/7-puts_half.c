#include "main.h"

/**
 * puts_half - half of string
 *
 * @str: string
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int i, n;

	len++;
	n = len / 2;
	for (i = n; s[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
