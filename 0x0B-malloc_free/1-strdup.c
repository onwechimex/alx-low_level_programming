#include "main.h"
#include <stdlib.h>

/**
 * _strdup - display a copy of a string in a pointer
 * @str: string
 * Return: Null or string
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int k, u;

	if (str == NULL)
	{
		return (NULL);
	}
	for (k = 0; str[k] != '\0'; k++)
		;
	k++;
	if (k < 1)
		return (NULL);
	p = malloc(sizeof(char) * k);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (u = 0; u < k; u++)
		p[u] = str[u];
	p[u] = '\0';

	return (p);
}
