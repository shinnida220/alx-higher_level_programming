#ifndef _LISTS_
#define _LISTS_

#include <stdlib.h>
/**
 * struct listint_s - singly-linked list
 * @n: integer value of current node
 * @next: links to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int check_cycle(listint_t *list);
size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
void free_listint(listint_t *head);

#endif
