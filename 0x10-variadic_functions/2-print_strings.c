#include "variadic_functions.h"
/**
 * print_strings - print strings to stdout
 * @separator: separ argument
 * @n: number of strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
    char *s;
	va_list args;

	if (separator == NULL)
	{
		separator = "";
	}


	va_start(args, n);
	for (i = 0; i < n; i++)
	{
        s = va_arg(args, char *);
		if (i !=  0)
			printf("%s", separator);
        if (!s)
            s = "(nil)";
		printf("%s", va_arg(args, char *));
	}
	va_end(args);
	printf("\n");
}
