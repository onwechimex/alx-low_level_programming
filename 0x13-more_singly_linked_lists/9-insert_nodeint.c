#include "lists.h"

/**
* insert_nodeint_at_index - function that inserts a new
* node at a given position
* @head: pointer to the head of the linked list
* @idx: index of the list where the new node should be added.
* Index starts at 0
* @n: the data to be added to the new node
* Return: returns the address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tp;
	listint_t *nw;
	unsigned int k = 0;

	if (!head)
		return (NULL);

	nw = malloc(sizeof(listint_t));
	if (!nw)
		return (NULL);

	nw->n = n;
	(nw->next) = NULL;

	if (idx == 0)
	{
		(nw->next) = (*head);
		*head = nw;
		return (nw);
	}

	tp = *head;

	for (k = 0; tp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			nw->next = (tp->next);
			(tp->next) = nw;
			return (nw);
		}
		else
			tp = (tp->next);
	}
	return (NULL);
}
