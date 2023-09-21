#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - add a node to the list of nodes in the list of nodes
 * @head: the head of the list of nodes to be added
 * @str: the name of the node to be added
 * Return: adress of the node
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
	haruma->next = *head;
	*head = haruma;


	return (haruma);
}
