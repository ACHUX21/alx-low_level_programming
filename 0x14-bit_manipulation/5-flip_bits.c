#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another
 * @n: The first
 * @m: The second
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int count;
	unsigned long int len;

	len = sizeof(n) * 8;
	count = 0;
	while (len--)
	{
		if (x & 1)
			count++;
		x >>= 1;
	}
	return (count);
}
