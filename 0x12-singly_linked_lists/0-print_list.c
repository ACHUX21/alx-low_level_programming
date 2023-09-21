#include "lists.h"
/**
 * print_list - length of the list
 * @h: pointer to the structure
 * Return: the length of the list
*/
size_t print_list(const list_t *h)
{
const list_t *ptr = h;
size_t lenght = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		lenght++;
		ptr = ptr->next;
	}
	return (lenght);
}
