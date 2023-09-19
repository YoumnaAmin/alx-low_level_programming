#include "main.h"

/**
 * _strcpy -copy string
 *
 * @dest: character
 * @src: character
 *
 * Return: return a value
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (sre[i] != '\0');
	return (dest);
}
