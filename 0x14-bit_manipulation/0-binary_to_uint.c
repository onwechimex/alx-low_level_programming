#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int
* @b: string of binary numbers
* Return: returns an unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0, k = 0;

	if (!b)
		return (0);

	while (b[j])
	{
		if (b[j] == '0' || b[j] == '1')
		{
			k <<= 1;
			k += b[j] - '0';
			j++;
		}
		else
			return (0);
	}
	return (k);
}
