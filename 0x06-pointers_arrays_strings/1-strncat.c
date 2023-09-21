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
	int j, k;

	while (dest[i])
	{
		i++;
	}
	while (src[k])
	{
		k++;
	}
	if (n <= k)
	{
		for (j = 0; src[j] < src[n]; j++)
		{
			dest[i++] = src[j];
		}
	}
	else
	{
		for (j = 0; src[j] ; j++)
		{
			dest[i++] = src[j];
		}
	}
	return (dest);
}
