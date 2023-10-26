#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index of the value
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int switcher;

	if (sizeof((*n)) * 8 < index)
		return (-1);

	switcher = 1 << index, *n |= switcher;
	return (1);
}

