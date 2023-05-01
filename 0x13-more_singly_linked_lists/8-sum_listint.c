#include "lists.h"

/**
* sum_listint - function that returns the sum of all the
* data (n) of a listint_t linked list
* @head: head of the list
* Return: returns the sum of all the n's
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tm = head;

	while (tm)
	{
		sum += tm->n;
		tm = (tm->next);
	}

	return (sum);
}

