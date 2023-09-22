#include "main.h"
#include <stdio.h>

/**
 * isLower - capitalizes all words of a string.
 *
 * @c: string
 *
 * Return: char
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - capitalizes all words of a string.
 *
 * @c: string
 *
 * Return: int
*/

int isDelimiter(char c)
{
	int i;
	char delim[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delim[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 *
 * @s: string
 *
 * Return: char
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int finddelim = 1;

	while (*s)
	{
		if (isDelimiter(*s))
			finddelim = 1;
		else if (isLower(*s) && finddelim)
		{
			*s -= 32;
			finddelim = 0;
		}
		else
			finddelim = 0;
		s++;
	}
	return (ptr);
}
