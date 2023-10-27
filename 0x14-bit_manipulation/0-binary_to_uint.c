#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: const char
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int x;
	int i;

	x = 0;
	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '0')
		{
			x = x * 2;
		}
		else if (b[i] == '1')
		{
			x = x * 2 + 1;
		}
	}
	return (x);
}
