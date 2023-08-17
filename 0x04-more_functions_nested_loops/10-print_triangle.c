#include "main.h"
/**
 * print_triangle - Function
 *
 * @size: Integer
 */

void print_triangle(int size)
{
int i, j, k;

for (i = size ; i >= 0 ; i--)
{
for (j = i ; j > -1 ; j--)
{
putchar(' ');
}
for (k = i ; k <= size ; k++)
{
putchar('#');
}

putchar('\n');
}
}
