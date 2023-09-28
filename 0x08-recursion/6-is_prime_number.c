#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a prime number,else return 0
 *
 * @n: int
 * @y: repition
 *
 * Return: int
*/

int check_prime(int n, int y);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - to check if prime or not
 *
 * @n: int num
 * @y: repition
 *
 * Return: int
*/

int check_prime(int n, int y)
{
	if (y >= n && n > 1)
	{
		return (1);
	}
	else if (n % y == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, y + 1));
}
