#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: the separator
 * @n: the number of numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	if (separator == NULL)
		return;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i !=  0)
			printf("%s", separator);
		printf("%u", va_arg(args, unsigned int));

	}
	va_end(args);

	printf("\n");
}
