#include "main.h"

/**
* _strncat -  concatenates two strings.
*
* @dest: string
* @src: string
* @n:int
*
* Return: pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i])
	{
		i++;
	}
	for (j = 0; src[j] < src[n] && src[i] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[j + i] = '\0';
	return (dest);
}
