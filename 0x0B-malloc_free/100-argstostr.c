#include "main.h"
#include <stdlib.h>

/**
 * argstostr - check the code for ALX School students.
 * @ac: integer
 * @av: character
 * Return: Null or string.
 */
char *argstostr(int ac, char **av)
{
	int n, j, l, buffL;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	n = j = l  = buffL = 0;

	for (n = 0; av[n]; n++)
	{
		for (j = 0; av[n][j]; j++)
			l++;
	}
	p = (char *) malloc(l * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);
	for (n = 0; av[n]; n++)
	{
		for (j = 0; av[n][j]; j++, buffL++)
			p[buffL] = av[n][j];
		p[buffL] = '\n';
		buffL++;
	}
	p[buffL] = '\0';
	return (p);
}
