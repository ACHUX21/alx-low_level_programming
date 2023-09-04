#include "main.h"
/**
* alloc_grid - function that returns a pointer to a 2d array of integers.
* @width: the width of the array
* @height: the height of the array
* Return: pointer
*/
int **alloc_grid(int width, int height)
{
	int **array;

	int j, i;
    if (width <= 0 || height <= 0)
        return (NULL);

	array = (int **)malloc(height * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		array[j] = (int *)malloc(width * sizeof(int));
			if (array[j] == NULL)
			{
				for (i = 0; i < j; i++)
					free(array[i]);
				free(array);
				return (NULL);
			}
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
			array[j][i] = 0;
	}
	return (array);
}
