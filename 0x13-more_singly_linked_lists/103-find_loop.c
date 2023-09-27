#include "lists.h"
/**
 * find_listint_loop - finds
 * @head: linked
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s = head;
	listint_t *f = head;

	if (!head)
		return (NULL);

	while (s && f && f->next)
