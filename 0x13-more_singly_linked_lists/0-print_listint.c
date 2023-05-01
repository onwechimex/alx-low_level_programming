#include "lists.h"

/**
* print_listint - a function that prints all the elements of a listint_t list
* @h: pointer to a listint_t list
* Return: returns the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	if (h == NULL)
		return (k);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		k++;
		h = (h->next);
	}

	return (k);
}
