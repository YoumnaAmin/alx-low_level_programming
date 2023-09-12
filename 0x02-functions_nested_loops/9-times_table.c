#include "main.h"

/**
 * times_table - prints the time table of all numb
*/

void times_table(void)
{
	int i, j, mult;

	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			mult = i * j;
			if (mult <= 9)
				_putchar(' ');
			else
				_putchar((mult / 10) + 48);
			_putchar((mult % 10) + 48);
		}
		_putchar('\n');
	}
}
