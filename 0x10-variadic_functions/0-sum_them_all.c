#include "variadic_functions.h"
/**
 * sum_them_all - sum them all the variables
 * @n: number of variables
 * @...: int
 * Return: INT
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int sum = 0;

	if (n <= 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n ; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}
