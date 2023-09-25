#include "main.h"

/**
 * _strchr -  locates a character in a string.
 *
 * @s: points to char
 * @c: char to be found
 *
 * Return: points to char
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (s + i);
		}
	}
	return ('\0');
}
