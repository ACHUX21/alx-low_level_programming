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
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}
