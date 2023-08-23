#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverse array
 * @a: array to reverse
 * @n: size of array
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int i, j, arr[n];

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		j = n - i;
		arr[i] = a[j];
	}

	for (i = 0; i < n + 1; i++)
	{
		printf("%d", arr[i]);
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
