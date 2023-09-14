#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: the separator
 * @n: the number of numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n && separator != NULL; i++)
	{
		if (i !=  0)
			printf("%s", separator);
		printf("%d", va_arg(args, int));

	}
	va_end(args);

	printf("\n");
}
