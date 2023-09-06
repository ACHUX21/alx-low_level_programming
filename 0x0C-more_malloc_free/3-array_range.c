#include "main.h"
/**
* array_range - array range for array elements
* @min: minimum value
* @max: maximum value
* Return: array
*/
int *array_range(int min, int max)
{
	int *ptr;

	int i;

	int size = 0;

	if (max < min)
		return (NULL);

	size = max - min + 1;
	ptr = (int *)malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
