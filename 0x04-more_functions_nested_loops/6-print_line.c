#include "main.h"
/**
* print_line - Function
* @n: Integer
*/
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('_');
}
