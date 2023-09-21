#include "lists.h"
/**
 * list_len - length of the list structure
 * @h: pointer to the list structure
 * Return: the length of the list structure
*/
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t lenght = 0;

	while (ptr != NULL)
	{
		lenght += 1;
		ptr = ptr->next;
	}
	return (lenght);
}
