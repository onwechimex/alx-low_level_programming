#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at a given index
* @n: number to be operated on
* @index: index
* Return: returns 1 (Success), -1 (error)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int mk;

	if (index > 63)
		return (-1);

	mk = 1 << index;

	*n = (*n & ~mk) | (1 << index);

	return (1);
}
