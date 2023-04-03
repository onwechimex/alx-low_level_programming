#include <stdio.h>
#include "main.h"

/**
 * _memcpy - a function that copies a memory area
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: area size
 * Return: returns nothing
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
