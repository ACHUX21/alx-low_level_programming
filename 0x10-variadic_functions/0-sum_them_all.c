#include "variadic_functions.h"
/**
 * sum_them_all - sum them all the variables
 * @n: number of variables
 * Return: INT
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list ap;

	x = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		x += va_arg(ap, int);
	}
	va_end(ap);

	return (x);
}
