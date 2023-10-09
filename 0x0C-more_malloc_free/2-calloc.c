#include <stdlib.h>
/**
 * _memset -  initializes n bytes of memory to x
 * @p: initial adress
 * @x: variable to initialize with
 * @n: number of bytes to initialize
 *
 * Return: Return pointer char (so movements are 1 byte)
 */
char *_memset(char *p, int x, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		p[i] = x;

	return (p);
}

/**
 * _calloc -  allocates memory using malloc and initializes in 0
 * @nmemb: number of elements of array to allocate
 * @size: size of elements
 *
 * Return: Pointer to allocated memory or normal process termination
 * with a status value of 98
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;


	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);
	_memset(ptr, 0, size * nmemb);

	return (ptr);
}
