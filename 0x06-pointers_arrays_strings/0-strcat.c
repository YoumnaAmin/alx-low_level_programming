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
	char result[50];
	char *pResult = result;  // Create a pointer to the result buffer.

	// Copy the characters from dest to result using pointers.
	while (*dest != '\0')
	{
		*pResult = *dest;
		pResult++;
		dest++;
	}

	// Copy the characters from src to result using pointers.
	while (*src != '\0') {
		*pResult = *src;
		pResult++;
		src++;
	}
	*pResult = '\0'; // Null-terminate the result.
	*dest = *pResult;
}
