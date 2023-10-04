#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: points to cahr
 *
 * Return: char
*/

char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	if (str == 0)
	{
		return (0);
	}
	for (i = 0; str[i] != '\0'; i++)
	{; }
	ptr = malloc(i * sizeof(*str) + 1);
	if (ptr == 0)
	{
		return (0);
	}
	else
	{
		for (j = 0; j <= i; j++)
		{
			ptr[j] = str[j];
		}
		return (ptr);
	}
}
