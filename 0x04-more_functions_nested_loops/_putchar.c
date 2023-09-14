#include <unistd.h>
#include "main.h"

/**
 * _putchar - works as thw main putchae
 *
 * @c: the attribute that is been passed to function
 *
 * Return: success 1 , not success -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
