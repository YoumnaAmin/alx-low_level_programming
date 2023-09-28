#include "main.h"

/**
 * _strlen_recursion - len of string
 *
 * @s: string
 *
 * Return: int
*/

int _strlen_recursion(char *s)
{
	int cont = 0;

	if (*s > '\0')
	{
		cont += _strlen_recursion(s + 1) + 1;
	}
	return (cont);
}
