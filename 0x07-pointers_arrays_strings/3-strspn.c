#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: points to char
 * @accept:char to be compared
 *
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int i, j;

	for (i = 0; s[i] != ' '; i++)
		for (j = 0; accept[j] >= '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				k++;
			}
		}
	return (k);
}
