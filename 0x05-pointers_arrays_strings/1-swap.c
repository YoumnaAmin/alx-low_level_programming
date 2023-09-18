#include "main.h"

/**
 * swap_int - swap numbers
 *
 * @a: character 1
 * @b: character 2
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
