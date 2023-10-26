#include "main.h"
/**
 * binary_to_uint - Convert binary to uint value Using Bitwise Operations
 * @b: Char binary
 * Return: uint value
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != 48 && *b != 49)
			return (0);

		num = num << 1;
		num = num | (*b - 48);
		b++;
	}
	return (num);
}
