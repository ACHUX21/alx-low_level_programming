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
		free(harruma);
		return (1);
	}

	while (i != index)
	{
		if (!harruma)
		{
			return (-1);
		}
		achux = harruma;
		i++;
		harruma = harruma->next;
	}

	achux->next = harruma->next;
	free(harruma);
	return (1);
}
