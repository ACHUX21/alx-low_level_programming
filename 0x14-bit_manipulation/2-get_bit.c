#include "main.h"
/**
 * get_bit - get bit from int with index into
 * @n: number in decimal
 * @index: index bit
 * Return: bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	return ((n >> index) & 1);
}
