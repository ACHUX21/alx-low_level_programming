#include "main.h"
/**
* clear_bit - function that sets the value of a bit to 0 at a given index
* @n: number of bits to clear
* @index: index
* Return: 0 if successful and 1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (1);
	*n &= ~(1 << index);
	return (0);
}
