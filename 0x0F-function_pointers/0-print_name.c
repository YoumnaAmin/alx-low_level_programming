#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: name
 * @f: function pointer
 *
 * Return: nothing
*/

void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		f(name);
	}
}
