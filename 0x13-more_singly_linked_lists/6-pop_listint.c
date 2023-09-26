#include "lists.h"

/**
 * pop_listint - delete head node of linked lists
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int numb;

	if (!head || !*head)
		return (0);

	numb = (*head)->n;
	tempo = (*head)->next;
	free(*head);
	*head = tempo;

	return (numb);
}

