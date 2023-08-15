#include "main.h"

/**
 * times_table - Prints the 9 times table.
 *
 * Description: This function prints the multiplication table for the number 9,
 * starting from 0, up to 9 times 9.
 */

void times_table(void)
{
	int a, b, c;

	for (b = 0 ; b <= 9 ; b++)
	{
		for (a = 0 ; a <= 9 ; a++)
		{
		c = b * a;

			if (c <= 9)
			{
				_putchar(' ');
				_putchar(c + 48);
			}
			else
			{
				_putchar(c / 10 + 48);
				_putchar(c % 10 + 48);
			}
			if (a != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
