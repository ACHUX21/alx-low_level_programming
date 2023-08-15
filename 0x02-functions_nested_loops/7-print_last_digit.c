#include "main.h"
/**
 * print_last_digit - Calculates and returns the last digit of a given number.
 * @n: The integer number for which the last digit is to be determined.
 *
 * Return: The value of the last digit of the given number.
 */

int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar((-i) + '0');
		return (-i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}
