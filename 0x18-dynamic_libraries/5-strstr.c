#include "main.h"
#include <stdbool.h>

/**
 * startsWith -  locates a substring.
 *
 * @str: string
 * @prefix: string
 *
 * Return: bool
*/

bool startsWith(char *str, char *prefix)
{
	while (*prefix)
	{
		if (*str != *prefix)
		{
			return (false);
		}
		str++;
		prefix++;
	}
	return (true);
}

/**
 * _strstr -  locates a substring.
 *
 * @haystack: string
 * @needle: string
 *
 * Return: pointer tp str
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (startsWith(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
