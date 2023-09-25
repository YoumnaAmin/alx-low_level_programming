#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * @s: source string
 * @accept: string to be searched
 *
 * Return: points to char
*/

char *_strpbrk(char *s, char *accept)
{
	char *p;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	return ('\0');
}
