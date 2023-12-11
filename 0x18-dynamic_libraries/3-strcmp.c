#include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: eq
*/

int _strcmp(char *s1, char *s2)
{
	int eq = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			eq = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}
	return (eq);
}
