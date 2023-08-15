#include "main.h"
#include <stdio.h>
/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *		separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long long a = 1, b = 2;
	int i;

	printf("%llu, %llu", a, b);

	for (i = 2; i < 50; i++)
	{
		unsigned long long next = a + b;

		printf(", %llu", next);

		a = b;
		b = next;

	}

	printf("\n");

	return (0);
}
