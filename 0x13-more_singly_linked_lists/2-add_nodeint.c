#include "lists.h"

/**
* add_nodeint - function that adds a new node at the beginning
* of a listint_t list
* @head: the head of the listint_t list
* @n: the data to be added in the new node
* Return: returns address of the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw = malloc(sizeof(listint_t));

	if (nw == NULL)
		return (NULL);

	if (*head == NULL)
	{
		nw->n = n;
		nw->next = NULL;
		*head = nw;

		return (nw);
	}

	 (nw->next) = *head;
	(nw->n) = n;
	*head = nw;

	return (nw);
}
