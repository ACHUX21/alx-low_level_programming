#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0 at a given index
* @n: number of bits to clear
* @index: index
* Return: 0 if successful and 1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int new;

	if (index > sizeof((*n) * 8))
		return (1);
	new = ~(1 << index);
	*n = *n & new;
	return (0);
}
