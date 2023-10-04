#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: point to char
 * @s2: points to char
 *
 * Return: char
*/

char *str_concat(char *s1, char *s2)
{
	int size = 0;
	int i, j, k, l;
	char *ptr;

	if (s1 == 0 || s2 == 0)
	{
		s1 = '\0';
		s2 = '\0';
	}
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j;
	ptr = malloc(size * sizeof(*s1 + *s2) + 1);
	if (ptr == 0)
	{
		return (0);
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		ptr[k] = s1[k];
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		ptr[l + k] = s2[l];
	}
	ptr[size] = '\0';
	return (ptr);
}
