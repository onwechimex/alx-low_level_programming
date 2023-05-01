#include "lists.h"

/**
* free_listint2 - function that frees a listint_t list, sets head to NULL
* @head: pointer to the head of the list
* Return: returns 0
*/
void free_listint2(listint_t **head)
{
	listint_t *tp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tp = *head;
		*head = (*head)->next;
		free(tp);
	}
	*head = NULL;
}
