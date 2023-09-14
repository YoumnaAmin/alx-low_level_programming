#include "main.h"

/**
 * _isdigit - to test if it's digit
 *
 * @c: character
 *
 * Return: 1 if success, 0 if failure
*/

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
