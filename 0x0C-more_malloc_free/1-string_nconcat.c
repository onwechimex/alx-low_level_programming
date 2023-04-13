#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: index
 * Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *r;
	unsigned int size1 = 0, size2 = 0, q;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[size1] != '\0')
	{
		size1++;
	}

	while (s2[size2] != '\0')
	{
		size2++;
	}

	if (n > size2)
	n = size2;
	r = malloc((size1 + n + 1) * sizeof(char));

	if (r == NULL)
		return (0);

	for (q = 0; q < size1; q++)
	{
		r[q] = s1[q];
	}

	for (; q < (size1 + n); q++)
	{
		r[q] = s2[q - size1];
	}
	r[q] = '\0';

	return (r);
}
