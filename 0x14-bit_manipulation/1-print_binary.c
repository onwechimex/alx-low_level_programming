#include "main.h"

/**
* print_binary - function that prints the binary representation of a number
* @n: the number to be printed in binary form
* Return: returns 0
*/
void print_binary(unsigned long int n)
{
	int k, j = 0;
	unsigned long int current;

	for (k = 63; k >= 0; k--)
	{
		current = n >> k;

		if ((current & 1) == 1)
		{
			_putchar('1');
			j++;
		}
		else if (j != 0)
			_putchar('0');
	}
	if (j == 0)
		_putchar('0');
}
