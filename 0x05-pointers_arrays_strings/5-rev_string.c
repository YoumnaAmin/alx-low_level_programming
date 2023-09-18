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
	char s2;

	for (i = 0; i < len; i++)
	{
		s2 = s[i];
		s[i] = s[(len - 1) - i];
		s[(len - 1) - i] = s2;
	}
}
