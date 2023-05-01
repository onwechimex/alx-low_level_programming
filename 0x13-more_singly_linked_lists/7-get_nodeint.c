#include "lists.h"

/**
* get_nodeint_at_index - function that returns the nth node of a
* listint_t linked list
* @head: head of the list
* @index: the index of the node, starting at 0
* Return: returns the nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *tm;

	if (!head)
		return (NULL);

	tm = head;

	while (tm)
	{
		tm = (tm->next);
		k++;
	}
	if (index >= k)
	{
		return (NULL);
	}

	k = 0;
	tm = head;

	while (tm && k < index)
	{
		tm = (tm->next);
		k++;
	}

	return (tm);
}
