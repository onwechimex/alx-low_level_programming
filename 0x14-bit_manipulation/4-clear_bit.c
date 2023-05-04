#include "main.h"

/**
* clear_bit - function that clears the value of a bit at a given index
* @n: number to be operated on
* @index: index
* Return: returns 1 (Success), -1 (error)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int km;

	if (index > 63)
		return (-1);

	km = 1 << index;

	*n = (*n & ~km);

	return (1);
}

