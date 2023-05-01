#include "lists.h"

/**
* delete_nodeint_at_index - function that deletes the node at
* index of a listint_t linked list
* @head: pointer to the head of the list
* @index: index of the node to be deleted
* Return: returns 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *tp = *head;
	listint_t *c = NULL;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		tp = (*head)->next;
		free(*head);
		*head = tp;
		return (1);
	}

	for (j = 0; j < index - 1; j++)
	{
		if (!tp || !(tp->next))
			return (-1);
		tp = (tp->next);
	}
	c = (tp->next);
	tp->next = c->next;
	free(c);

	return (1);
}
