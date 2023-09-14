#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
*/

void more_numbers(void)
{
	int cont = 0;
	int num;

	while (cont < 10)
	{
		for (char i = 0; i <= 14; i++)
		{
			num = i;
			if (num > 9)
			{
				_putchar(1 + 48);
				num = i % 10;
			}
			_putchar(num + 48);
		}
		_putchar(10);
		cont++;
	}
}
