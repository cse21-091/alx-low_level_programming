#ifndef LISTS_H
#define LISTS_H

/**
 * struct ListNode - singly linked list node
 * @str_value: string - (malloced string)
 * @str_leng: length of the string
 * @next_node: points to the next node
 *
 * descr: structural rep for a node in singly linked list
 * used for an ALX project	
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif

