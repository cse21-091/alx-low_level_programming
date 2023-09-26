#include "lists.h"

/**
 * free_listint - frees linked lists.
 * @head: listint_t list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}

