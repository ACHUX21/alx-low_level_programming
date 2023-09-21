#include "lists.h"

/**
 * add_node_end - add a node to the end of the list
 * @head: a node to be added
 * @str: str of the node
 * Return: Address of the new node, or NULL on failure.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *haruma = malloc(sizeof(list_t));

	if (!haruma)
		return (NULL);

	haruma->str = strdup(str);
	if (haruma->str == NULL)
	{
		free(haruma);
		return (NULL);
	}

	haruma->len = strlen(str);
	haruma->next = NULL;

	if (*head == NULL)
	{
		*head = haruma;
	}
	else
	{
		list_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = haruma;
	}

	return (haruma);
}
