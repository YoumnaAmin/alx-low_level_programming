#include "main.h"

/**
 * _isupper - to tesy if the alphabet is UPPERCASE
 *
 * @c: character
 *
 * Return: 1 if success, 0 if failure
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
