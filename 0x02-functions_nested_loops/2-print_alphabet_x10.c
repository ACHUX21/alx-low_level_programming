#include "main.h"
/**
* print_alphabet_x10 - Entry point
* Description: a function that prints the alphabets 10 times,
* in lowecase followed by a new line
* Return: void
*/
void print_alphabet_x10(void)
{
	char n;
	int k = 0;

	while (k <= 10)
	{
		for (n = 'a' ; n <= 'z' ; n++)
		{
			_putchar(n);
		}

	_putchar('\n');
	k++;

	}

}
