#include "main.h"
#include <stdio.h>

/**
* _strspn - a function that gets the length of a prefix substring
* @s: the string to be tested
* @accept: the string to find
* Return: returns the number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int u, j;
	unsigned int c = 0;

	for (u = 0; s[u] != 0; u++)
	{
		if (s[u] == ' ')
			break;
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[u] == accept[j])
				c++;
		}
	}
	return (c);
}
