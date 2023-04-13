#include "main.h"

/**
 * _memset - copy char
 * @h: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *h, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		h[d] = b;
	}
	return (h);
}


/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}
