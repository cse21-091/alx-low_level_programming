#include "lists.h"

/**
 * free_listint5 - frees linked lists.
 * @head: pointer to the listint_t list to be freed
 */
void free_listint5(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;

	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}

	*head = NULL;
}

