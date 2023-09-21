#ifndef _HEADER_
#define _HEADER_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - A linked list node structure.
 * @str: Pointer to a string.
 * @len: Length of the string.
 * @next: Pointer to the next node in the linked list.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


size_t list_len(const list_t *h);
size_t print_list(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
