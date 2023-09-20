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
	char result[50];  /* Make sure this buffer is large enough for the result.*/
	char *pResult = result;  /*Create a pointer to the result buffer.*/

	while (*dest != '\0')
	{
		*pResult = *dest;
		pResult++;
		dest++;
	}
	while (*src != '\0')
	{
		*pResult = *src;
		pResult++;
		src++;
	}
	*pResult = '\0';
	*dest = *pResult;
	return (pResult);
}
