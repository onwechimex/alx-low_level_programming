#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string1
 * @s2: string2
 * Return: Null of s1
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int y, j, size, w;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (y = 0; s1[y]; y++)
		;
	for (j = 0; s2[j]; j++)
		;
	size = y + j + 1;
	p = malloc(sizeof(char) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (w = 0; w < size; w++)
		w < y ? (p[w] = s1[w]) : (p[w] = s2[w - y]);
	return (p);
}
