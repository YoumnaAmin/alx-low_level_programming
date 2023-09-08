#include<unistd.h>

/**
 * main - start of the program
 *
 * Description: A C program that prints with printf function
 *
 * Return: one (Success)
*/

int main(void)
{	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
