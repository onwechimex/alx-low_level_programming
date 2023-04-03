#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: the string to be tested
 * @needle: the substring to be searched for
 * Return: returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, b = 0, k;

	for (i = 0; haystack[i] != 0; i++)
	{
		k = i;
		b = 0;
		for (; needle[b] != 0; )
		{
			if (haystack[k++] == needle[b++])
			{
				continue;
			}
			break;
		}
		if (needle[b] == '\0')
			return ((haystack + i));
	}
	return (NULL);
}
