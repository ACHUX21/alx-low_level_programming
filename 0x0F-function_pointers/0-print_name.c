#include "function_pointers.h"

/**
 * print_name - print the name of the function
 * @name: the name of the function
 * @f: the function pointer
*/
void print_name(char *name, void (*f)(char *))
{
    if ((name != NULL) && (f != NULL))
        f(name);
}
