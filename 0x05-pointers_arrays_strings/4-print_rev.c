#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0;
	int i = 1;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
