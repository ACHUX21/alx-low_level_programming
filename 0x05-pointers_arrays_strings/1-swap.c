#include "main.h"
/**
 * swap_int - Function to swap
 *
 * @a: Integer
 * @b: Integer
 * @temp: Temporary variable
 * Return: Void
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
