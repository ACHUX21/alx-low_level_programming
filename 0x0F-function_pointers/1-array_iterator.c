#include "function_pointers.h"
/**
 * array_iterator - iterator function for array elements
 * @array: pointer
 * @size: size of the array
 * @action: function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t l = 0;
	if (array != NULL && size != 0 && action != NULL)
	{
		while (l < size)
		{
			action(array[l]);
			l++;
		}
	}

}
