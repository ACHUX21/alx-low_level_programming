#include "main.h"
/**
* print_alphabet - Entry point
* Description: a function that prints the alphabet,
* in lowecase followed by a new line
* Return: void
*/
void print_alphabet(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
