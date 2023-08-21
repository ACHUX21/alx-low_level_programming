#include "main.h"
/**
 * swap_int - Function to swap
 *
 * @a: Integer
 * @b: Integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
