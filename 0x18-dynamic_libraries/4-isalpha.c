#include "main.h"

/**
 * _isalpha - custom  function
 *
 * @c: Character
 *
 * description: to print either 0 or c
 *
 * Return: c if scucceeded 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
