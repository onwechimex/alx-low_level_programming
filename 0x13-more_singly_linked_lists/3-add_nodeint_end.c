#include "lists.h"

/**
* add_nodeint_end - function that adds a new node at the end
* of a listint_t list
* @head: head of the listint_t list
* @n: the data to be added to the new node
* Return: returns address of the new element, or NULL if failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *wn;
	listint_t *tp;

	wn = malloc(sizeof(listint_t));
	if (wn == NULL)
		return (NULL);
	tp = *head;

	if (*head == NULL)
	{
		(wn->next) = NULL;
		wn->n = n;
		*head = wn;

		return (wn);
	}
	while (tp->next != NULL)
	{
		tp = (tp->next);
	}

	wn->next = NULL;
	wn->n = n;
	(tp->next) = wn;

	return (wn);
}
