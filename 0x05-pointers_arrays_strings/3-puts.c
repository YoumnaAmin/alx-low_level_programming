#include "main.h"

/**
 * _puts - mimic puts funct
 *
 * @str: string
*/

void _puts(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
