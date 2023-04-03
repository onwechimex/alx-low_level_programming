#include <stdio.h>
#include "main.h"

/**
* _strchr - a function that locates a character in a string
* @s: the string to locate the first occurence of c
* @c: the character to locate
* Return: returns a pointer to the first occurence of c
*/
char *_strchr(char *s, char c)
{
	int u;

	for (u = 0; 1 ; u++)
	{
		if (s[u] == c)
			return ((s + u));
		if (s[u] == 0)
			break;
	}
	return (NULL);
}
