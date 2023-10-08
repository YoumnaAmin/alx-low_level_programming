#include "main.h"
/**
 * string_nconcat -  concatenates two strings
 *
 * @s1: point to char
 * @s2: points to char
 * @n: unsigned int
 *
 * Return: char
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr;
	char *nul = "";

	if (s1 == NULL)
		s1 = nul;
	if (s2 == NULL)
		s2 = nul;
	for (i = 0; s2[i] != '\0'; i++)
	{; }
	for (j = 0; s1[j] != '\0'; j++)
	{; }
	if (n >= i)
	{
		ptr = malloc((*s1 + *s2) + 1);
		for (k = 0; k < j; k++)
			ptr[k] = s1[k];
		for ( ; k < i + j; k++)
			ptr[k] = s2[k - j];
	}
	ptr = malloc((*s1) + (n * sizeof(char)) + 1);
	for (k = 0; k < j; k++)
		ptr[k] = s1[k];
	for (; k < n + j; k++)
		ptr[k] = s2[k - j];
	ptr[k] = '\0';
	if (ptr == 0)
		return (NULL);
	return (ptr);
}
