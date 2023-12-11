#include "main.h"

/**
 * _islower - custom  function
 *
 * @c: Character
 *
 * description: to print either 0 or c
 *
 * Return: c if scucceeded 0 if not
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
