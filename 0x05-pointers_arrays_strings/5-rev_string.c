#include "main.h"

/**
 * rev_string -reveres string but doesn't print it
 *
 * @s: string
*/

void rev_string(char *s)
{
	const int len = strlen(s);
	int i;
	char s2[len];

	for (i = len - 1; i >= 0; i--)
	{
		s2[(len - 1) - i] = s[i];
	}
	for (i = 0; i < len; i++)
	{
		s[i] = s2[i];
	}
}
