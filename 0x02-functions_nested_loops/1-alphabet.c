#include <stdio.h>

/**
 * print_alphabet - print [a-z]
 *
 * i : int
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
