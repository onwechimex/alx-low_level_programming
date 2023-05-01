#include "lists.h"

/**
* free_listint - function that frees a listint_t list
* @head: head of the listint_t list
* Return: returns 0
*/
void free_listint(listint_t *head)
{
	listint_t *tp;

	while (head != NULL)
	{
		tp = head;
		head = (head->next);
		free(tp);
	}
}

