#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the usage of singly linked lists
 * by creating a new node and adding it to the beginning of the list.
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;        /* Pointer to the head of the linked list */
    list_t *new;         /* Pointer to a new list_t node */
    list_t hello = {"World", 5, NULL}; /* Initial list node */
    size_t n;            /* Variable to store the number of elements in the list */

    /* Initialize the head pointer to point to the initial node */
    head = &hello;

    /* Allocate memory for a new list_t node */
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }

    /* Initialize the new node */
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;

    /* Update the head to point to the new node, effectively adding it to the beginning */
    head = new;

    /* Get the number of elements in the list */
    n = list_len(head);

    /* Print the number of elements in the list */
    printf("-> %lu elements\n", n);

    /* Free the memory allocated for the new node's string and the node itself */
    free(new->str);
    free(new);

    return (0);
}

