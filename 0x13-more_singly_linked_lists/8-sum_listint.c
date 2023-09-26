#include "lists.h"

/**
 * sum_listint - computes the summation of all the data in a listint_t list.
 * @head: first node in the linked list.
 *
 * Return: resulting summation.
 */
int sum_listint(listint_t *head)
{
	int summ = 0;
	listint_t *tempo = head;

	while (tempo)
	{
		summ += tempo->n;
		tempo = tempo->next;
	}

	return (summ);
}

