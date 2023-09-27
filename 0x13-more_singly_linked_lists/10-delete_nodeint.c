#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes
 * @head: Pointer
 * @index: Index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *harruma = *head;
	listint_t *achux = NULL;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = harruma->next;
