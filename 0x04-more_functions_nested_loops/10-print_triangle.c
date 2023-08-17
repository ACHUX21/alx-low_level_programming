#include "main.h"
/**
 * print_triangle - Function
 *
 * @size: Integer
 */

void print_triangle(int size)
{
int i, j, k;

if (size > 0)
{
for (i = size ; i >= 0 ; i--)
{
for (j = i ; j > -1 ; j--)
{
_putchar(' ');
}
for (k = i ; k <= size ; k++)
{
_putchar('#');
}

_putchar('\n');
}
}
}