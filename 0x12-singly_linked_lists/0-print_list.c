#include <stdio.h>
#include "lists.h"

/**
 * print_list - displays all the elements of a linked list
 * @list_node: Pointer to the list_t list to be printed
 *
 * Return: the count of nodes printed
 */
size_t print_list(const list_t *list_node)
{
	size_t node_count = 0;

	while ( list_node)
	{
		if (!list_node->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", list_node->len, list_node->str);
		list_node = list_node->next;
		node_count++;
	}

	return (node_count);
}

