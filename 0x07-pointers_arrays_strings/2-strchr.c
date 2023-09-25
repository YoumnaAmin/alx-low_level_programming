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
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			p = &s[i - 1];
		}
		else
			continue;
	}
	return (p);
}
