#include "function_pointers.h"
/**
 * int_index - index of the function
 * @array: array of function
 * @cmp: function pointer comparison
 * Return: Integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
    int i;

    if (size <= 0 || array == NULL || cmp == NULL)
        return -1;
    for (i = 0; i < size; i++)
    {
        if (cmp(array[i]))
            return (i);
    }
}
