#include "main.h"
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0 ; i < 15 ; i++)
	{
		if (i > 9)
			_putchar(i / 10 + 48);
		_putchar(i % 10 + 48);
	}
}
