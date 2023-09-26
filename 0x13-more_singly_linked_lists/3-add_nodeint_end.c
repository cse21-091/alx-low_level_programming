#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to input in new element
 *
 * return: pointer to the new node end or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnodeend;
	listint_t *tempo = *head;

	newnodeend = malloc(sizeof(listint_t));
	if (!newnodeend)
		return (NULL);

	newnodeend->n = n;
	newnodeend->next = NULL;

	if (*head == NULL)
	{
		*head = newnodeend;
		return (newnodeend);
	}

	while (tempo->next)
		tempo = tempo->next;

	tempo->next = newnodeend;

	return (newnodeend);
}

