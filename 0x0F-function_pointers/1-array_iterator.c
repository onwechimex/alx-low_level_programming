#include <stdio.h>
/**
 *array_iterator - function that executes function given as param.
 *@array: arrray of elements.
 *@size: size of array.
 *@action: function pointer.
 *
 *Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && size > 0 && action)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}
