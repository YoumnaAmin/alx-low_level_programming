#include "main.h"

/**
 * puts2 - write a letter and skip a letter
 *
 * @str: string
*/

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
