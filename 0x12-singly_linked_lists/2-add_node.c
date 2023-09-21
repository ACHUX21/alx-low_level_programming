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
list_t *add_node(list_t **head, const char *str)
{
	list_t *haruma;
	unsigned int len = 0;

	while (str[len])
		len++;

	haruma = malloc(sizeof(list_t));
	if (!haruma)
		return (NULL);
	haruma->str = strdup(str);
	haruma->len = len;
	haruma->next = (*head);
	(*head) = haruma;

	return (*head);
}
