#include "main.h"

/**
 * _strcat -  concatenates two strings.
 *
 * @dest: string
 * @src: string
 *
 * Return: pointer
*/

char *_strcat(char *dest, char *src)
{
	int n1, n2;

	for (n1 = 0; dest[n1] != '\0'; n1++)
		;
	for (n2 = 0; src[n2]; n2++)
		dest[n1++] = src[n2];
	return (dest);
}
