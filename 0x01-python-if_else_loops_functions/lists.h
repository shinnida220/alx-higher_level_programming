#ifndef _LISTS_
#define _LISTS_

#include <stddef.h>

/**
 * struct listint_s - a singly-linked list
 * @n: int number
 * @next: links to the next node
 * Description: the singly-linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
listint_t *insert_node(listint_t **head, int number);

#endif
