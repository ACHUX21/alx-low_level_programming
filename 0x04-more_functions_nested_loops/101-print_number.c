#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */

void print_numbers(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');

		num = -n;
	}
	else
		num = n;
	if (num / 10)
		print_numbers(num / 10);
	_putchar((num % 10) + '0');
}
