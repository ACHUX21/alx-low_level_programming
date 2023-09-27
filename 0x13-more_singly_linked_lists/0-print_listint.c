#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	int i = 0;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}
