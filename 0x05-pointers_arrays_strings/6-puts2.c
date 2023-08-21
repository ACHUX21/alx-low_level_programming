#include "main.h"
/**
 * puts2 - Prints a string followed by a new line to stdout.
 * @str: The string to be printed.
 */
void puts2(char *str)
{
	int i = 0;
    int lenght = 0;

    while (s[lenght] != '\0')
        lenght++;

	for (i = 0; i < lenght - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
