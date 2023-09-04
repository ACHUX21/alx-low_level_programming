#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size of the array
 * @c: character
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}