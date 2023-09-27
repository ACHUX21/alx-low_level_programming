#include "lists.h"

/**
 * free_listint - Frees
 * @head: Pointer
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *achux = head;
	listint_t *lun = NULL;

	while (achux)
	{
		lun = achux->lun;
		free(achux);
		achux = lun;
	}
}
