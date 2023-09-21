#include "lists.h"

/**
 * free_list - frees the memory
 * @head: Pointer
 */
void free_list(list_t *head)
{
	list_t *haruma = head;
	list_t *next;

	while (haruma != NULL)
	{
		next = haruma->next;
		free(haruma->str);
		free(haruma);
		haruma = next;
	}
}
