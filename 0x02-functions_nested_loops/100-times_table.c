#include "main.h"

/**
* print_times_table - fuction that print table using a input number
* @n: Integer
* Return: Void
*/

void print_times_table(int n)
{
	int x, y, p;

	for (x = 0 ; x <= n ; x++)
	{
		for (y = 0 ; y <= n ; y++)
		{
			p = x * y;
			if (p >= 10 && p < 100)
			{
				_putchar(p / 10 + 48);
				_putchar(p % 10 + 48);
			}
			else if (p >= 100)
			{
				_putchar(p / 100 + 48);
				_putchar(p / 10 % 10 + 48);
				_putchar(p % 10 + 48);
			}
			else
			{
				_putchar(p + 48);
			}
			if (y != n)
			{
			_putchar(',');
				if (p < 10)
					_putchar(' ');
				if (p < 100)
					_putchar(' ');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
