/**
 *int_index - searches for an integer.
 *@array: array of integers.
 *@size: number of elements in array.
 *@cmp: pointer to function used to compare values.
 *
 *Return: index of first element.
 *-1 if no element is found or siz <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (k = 0; k < size; k++)
		{
			cmp(array[k]);
			if (cmp(array[k]) > 0)
			{
				res = k;
				break;
			}
			if ((cmp(array[k]) == (-1)))
			{
				return (res);
			}
		}
	}
	return (res);
}
