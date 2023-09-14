#include "variadic_functions.h"
/**
 * sum_them_all - sum them all the variables
 * @n: number of variables
 * Return: INT
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0, i = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while ((i++) < n)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
