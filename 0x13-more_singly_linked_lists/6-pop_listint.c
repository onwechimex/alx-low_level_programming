#include "lists.h"

/**
* pop_listint - function that deletes the head node of a listint_t
* linked list, and returns the head node’s data (n)
* @head: pointer to the head of the list
* Return: returns the head node's data
*/
int pop_listint(listint_t **head)
{
	int n;

	listint_t *pt;

	if (*head == NULL)
		return (0);

	pt = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(pt);

	return (n);
}
