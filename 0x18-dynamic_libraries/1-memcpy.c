#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: destination array/string
 * @src: source array/string
 * @n: number of bytes(unsigned int)
 *
 * Return: pointerto char
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
